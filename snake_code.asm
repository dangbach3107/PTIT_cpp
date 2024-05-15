.Model Small
.Stack 100h
.Data
    ;main menu
    t0 DB "   _____ _   _          _  ________ "
    t1 DB "  / ____| \ | |   /\   | |/ /  ____|"
    t2 DB " | (___ |  \| |  /  \  | ' /| |__   "
    t3 DB "  \___ \| . ` | / /\ \ |  < |  __|  "
    t4 DB "  ____) | |\  |/ ____ \| . \| |____ "
    t5 DB " |_____/|_| \_/_/    \_\_|\_\______|"
    main1 db "Press any key to start..."
    ;bild
    hlths db "Lives:",3,3,3
    ;ingame
    letadd dw ? ;display addresses of collectable letter, this is being displayed and updated during the game play
    hlth db 6 ;/2 ;health count which is 3 in this case
    ;Snake Info            
    start_position equ 300
    sadd dw start_position, 100 Dup(0) ;dia chi cac ky tu cua ran tren console
    snake db '@',100 Dup(0) ; cac ky tu cua ran
    snakel db 1 ;collected letters count
    ;end 
    
    sc db "Score: $"
    score DB 0
    gmov db "Game Over"
    endtxt db "Restart ? (y / n)"
    
    two DW 2
    map DW 1755
    et DW 80
    

.Code
start:
    mov ax, @data
    mov ds, ax
    
    mov ax,0b800h
    mov es, ax 
    
    mov ah,0
    mov al,0
    int 10h 
    
    cld ;clear Direction Flag
    
    ;hide text cursor
    mov ah,1
    mov ch,2bh
    mov cl,0bh
    int 10h  
    
    ;call main_menu
    
    startag:
    call clearall
    
    mov bx, start_position
    mov sadd, bx
    call bild ;put letters and draw borders
    
    xor cl,cl 
    xor dl,dl ;clear old values to not get input automatically or you can use it as the initial direction like " mov dl,'A' "
    ;mov dl, 'A'
    read: ;check for keyboard inputs
        mov ah,1
        int 16H
        jz s1
        mov ah,0
        int 16H ; get keystroke from keyboard, delete if appear
        and al,0dfh 
        mov dl,al
    
    s1: ;check if esc button is pressed
        cmp dl,1bh
        je ext
    
    left:
        cmp dl,'A'
        jne right
        call ml
        mov cl,dl
        jmp read
    
    right:
        cmp dl,'D'
        jne up
        call mr
        mov cl,dl
        jmp read
    
    up:
        cmp dl,'W'
        jne down
        call mu 
        mov cl,dl
        jmp read
    
    down:
        cmp dl,'S'
        jne read1
        call md
        mov cl,dl
        jmp read
    
    read1:
        mov dl,cl
        jmp read
    
    
    ext:
        xor cx,cx
        mov dh,24
        mov dl,79
        mov bh,7
        mov ax,700h
        int 10h
    mov ah, 4ch ; exit to operating system.
    int 21h    
ends 


main_menu proc
    mov di, 482
    lea si, t0
    mov cx, 36
    d0:
        movsb
        inc di
        loop d0
    
    mov di, 562
    lea si, t1
    mov cx, 36
    d1:
        movsb
        inc di
        loop d1
    
    mov di, 642
    lea si, t2
    mov cx, 36
    d2:
        movsb
        inc di
        loop d2 
    
    mov di, 722
    lea si, t3
    mov cx, 36
    d3:
        movsb
        inc di
        loop d3 

    mov di, 802
    lea si, t4
    mov cx, 36
    d4:
        movsb
        inc di
        loop d4
    
    mov di, 882
    lea si, t5
    mov cx, 36
    d5:
        movsb
        inc di
        loop d5
        
    mov di, 1134
    lea si, main1
    mov cx, 25
    m1:
        movsb
        inc di
        loop m1
        
    mov ah, 7
    int 21h
    ret 
main_menu endp



;Game screen 
bild proc ;is for placing borders and set chracters on the screen
    ;start point
    call border 

    call print_score
    
    lea si,hlths
    mov di,60
    mov cx,9
    loph:
        movsb 
        inc di ; inc de in ra tai cac vi tri 0, 2, 4.. , vi cac vi tri le in bi loi
        loop loph
        
        
    xor dx,dx
    mov di,sadd ; first position of snake
    mov dl,snake 
    es: mov [di],dl  
    ;Place chracters in game screen
        
    call place_food
    ret
bild endp  

;snake move:
;left:
ml proc ;snake move left function
    push dx 
    call shift_addrs
    sub sadd,2
    
    call eat
    
    call move_snake
    pop dx
ret    
endp
;right:
mr proc ;snake move right function
    push dx 
    call shift_addrs
    add sadd,2
    
    call eat
    
    call move_snake 
    
    pop dx
    
ret    
endp
;up:
mu proc ;snake move up function
    push dx 
    call shift_addrs
    sub sadd,80
    
    call eat
    
    call move_snake
    pop dx
ret    
endp
;down:
md proc ;snake move down function
    push dx 
    call shift_addrs
    add sadd,80
    
    call eat
    
    call move_snake
    pop dx
ret    
endp

shift_addrs proc
    push ax
    xor ch,ch
    xor bh,bh
    mov cl,snakel
    inc cl
    mov al,2
    mul cl
    mov bl,al
    
    xor dx,dx
    
    shiftsnake:
    mov dx,sadd[bx-2]
    mov sadd[bx],dx
    sub bx,2
    loop shiftsnake:
pop ax
ret
endp

eat proc ;to check if the snake hit a letter or not and add it to the snake
    push ax 
    push cx 
    
    mov di,sadd 
    es: cmp [di],0 
    jz no
    es: cmp [di],20h
    jz wall 
    es: cmp [di], '*'
    je addf
    jne wallk ; ran tu an minh

    addf:
        inc score
        mov letadd, 0 
        xor bh,bh
        mov bl,snakel
        mov snake[bx],'o'
        es: mov [di],0
        add snakel,1 
        call print_score
        call place_food
        jmp no
    wall:
        cmp di,160 
        jbe wallk ; cham tuong tren
        cmp di,1920
        jae wallk  ; cham tuong duoi
        mov ax,di
        mov bl,80
        div bl
        cmp ah,0
        jz wallk ; cham tuong trai
        mov ax,di
        add ax,2
        mov bl,80
        div bl
        cmp ah,0
        jz wallk ; cham tuong phai
        jmp no
    wallk:
        xor bh,bh
        mov bl,hlth
        es: mov [bx+10],0
        mov hlths[bx+2],0
        sub hlth,2
        cmp hlth,0
        jnz rest
        pop cx
        pop ax
        call game_over 
        rest: 
        pop cx
        pop ax
        call restart

    no:
        pop cx
        pop ax
ret
endp 


place_food proc
    push ax
    push dx
    lap:    
        mov ah, 00h
        int 1ah
        
        mov ax, dx
        xor dx, dx
        div map
        add dx, 162
        mov bx, dx
        
        mov ax, dx  
        xor dx, dx
        div two
        cmp dx, 0
        jne lap
        
        mov ax, bx
        div et
        cmp dx, 0
        je inleft
        
        mov ax, bx
        add ax, 2
        div et
        cmp dx, 0
        je inright

    inleft:
        add bx, 2
        jmp spawn
        
    inright:
        sub bx, 2
        
    spawn:    
        mov di, bx
        es:mov [di],'*'
        mov letadd[0], bx
        pop dx
        pop ax 
    ret
place_food endp

move_snake proc
    xor ch,ch
    xor si,si
    xor dl,dl
    mov cl,snakel
    xor bx,bx
    l1mr:
        mov di,sadd[si]
        mov dl,snake[bx]
        es: mov [di],dl
        add si,2
        inc bx
        loop l1mr
        mov di,sadd[si] 
        es:mov [di],0
ret
endp

border proc ;build borders function
    mov ah,0
    mov al,0
    int 10h 
    
    mov ah,6
    mov al,0 
    mov bh, 0ffh ; mau cua border
    
    mov ch,1
    mov cl,0
    mov dh,1
    mov dl,39
    int 10h ; tren
  
    mov ch,1
    mov cl,0
    mov dh,24
    mov dl,0
    int 10h ; trai
   
    mov ch,24
    mov cl,0
    mov dh,24
    mov dl,39
    int 10h ; duoi
    
    mov ch,1
    mov cl,39
    mov dh,24
    mov dl,39
    int 10h ; phai

ret
endp



print_score proc
    mov ah, 2
    mov dh, 0
    mov dl, 0
    mov bh, 0
    int 10h ; di chuyen con tro ve vi tri (0, 0)
    
    mov ah, 9
    lea dx, sc
    int 21h
    
    mov ax, 0
    mov al, score
    mov cx, 0
    mov bx, 10
    push_stack:
        mov dx, 0
        div bx
        inc cx
        push dx
        cmp ax, 0
        jne push_stack
        
    pop_stack:
        pop ax
        mov dl, al
        add dl, '0'
        mov ah, 2
        int 21h
        loop pop_stack 
    ret
print_score endp



restart proc
    call clearall
    
    xor ch,ch  
    xor si,si
    mov cl,snakel
    inc cl
    delt:  ; xoa het dia chi cua cac ky tu con ran
        mov di,sadd[si]
        es:mov [di],0
        add si,2
        loop delt
    
    mov cl,snakel
    inc cl
    xor si,si
    inc si
    xor di,di
    add di,2
    emptsn:
        mov snake[si],0
        mov sadd[di],0
        add di,2
        inc si
        loop emptsn
        mov snakel,1 ; xoa het ky tu cua ran
    
    mov bx, start_position
    mov sadd, bx  
    xor ch,ch
    mov cl,0
    xor si,si
    
    xor si,si
    mov snake[si],'@'
    
    jmp startag

endp


game_over proc
    call clearall
    call border
    
    mov hlths[4], 's'
    mov hlths[6], 3
    mov hlths[7], 3
    mov hlths[8], 3
    mov score, 0
    mov hlth, 6
    
    mov di, 992
    lea si, gmov
    mov cx,9
    lope1:
        movsb 
        inc di
        loop lope1
        
    mov di, 1064
    lea si,endtxt
    mov cx,17
    lope2w:
        movsb 
        inc di
        loop lope2w 
        
    qwer:         
        mov ah,7
        int 21h
        cmp al, 'y'   
        je startag
        cmp al, 'n'
        je ext
        jmp qwer
    
    
    
endp

clearall proc
    xor cx,cx
    mov dh,24
    mov dl,39
    mov bh,7
    mov ax,700h
    int 10h 
ret
endp    

