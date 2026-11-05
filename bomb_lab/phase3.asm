00000000000016b9 <phase_3>:
    16b9:	f3 0f 1e fa          	endbr64
    16bd:	48 83 ec 18          	sub    $0x18,%rsp
    16c1:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    16c8:	00 00 
    16ca:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    16cf:	31 c0                	xor    %eax,%eax
    16d1:	48 8d 4c 24 04       	lea    0x4(%rsp),%rcx
    16d6:	48 89 e2             	mov    %rsp,%rdx
    16d9:	48 8d 35 2c 1a 00 00 	lea    0x1a2c(%rip),%rsi        # 310c <_IO_stdin_used+0x10c>
    16e0:	e8 3b fc ff ff       	call   1320 <__isoc99_sscanf@plt>
    16e5:	83 f8 01             	cmp    $0x1,%eax
    16e8:	7e 1e                	jle    1708 <phase_3+0x4f>
    16ea:	83 3c 24 07          	cmpl   $0x7,(%rsp)
    16ee:	0f 87 98 00 00 00    	ja     178c <phase_3+0xd3>
    16f4:	8b 04 24             	mov    (%rsp),%eax   
    16f7:	48 8d 15 42 1e 00 00 	lea    0x1e42(%rip),%rdx        # 3540 <_IO_stdin_used+0x540>
    16fe:	48 63 04 82          	movslq (%rdx,%rax,4),%rax
    1702:	48 01 d0             	add    %rdx,%rax
    1705:	3e ff e0             	notrack jmp *%rax
    1708:	e8 16 07 00 00       	call   1e23 <explode_bomb>
    170d:	eb db                	jmp    16ea <phase_3+0x31>
    170f:	b8 00 00 00 00       	mov    $0x0,%eax
    1714:	83 e8 66             	sub    $0x66,%eax
    1717:	05 1c 01 00 00       	add    $0x11c,%eax
    171c:	2d 53 03 00 00       	sub    $0x353,%eax
    1721:	05 53 03 00 00       	add    $0x353,%eax
    1726:	2d 53 03 00 00       	sub    $0x353,%eax
    172b:	05 53 03 00 00       	add    $0x353,%eax
    1730:	2d 53 03 00 00       	sub    $0x353,%eax
    1735:	83 3c 24 05          	cmpl   $0x5,(%rsp)
    1739:	7f 06                	jg     1741 <phase_3+0x88>
    173b:	39 44 24 04          	cmp    %eax,0x4(%rsp)
    173f:	74 05                	je     1746 <phase_3+0x8d>
    1741:	e8 dd 06 00 00       	call   1e23 <explode_bomb>
    1746:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    174b:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    1752:	00 00 
    1754:	75 42                	jne    1798 <phase_3+0xdf>
    1756:	48 83 c4 18          	add    $0x18,%rsp
    175a:	c3                   	ret
    175b:	b8 75 02 00 00       	mov    $0x275,%eax
    1760:	eb b2                	jmp    1714 <phase_3+0x5b>
    1762:	b8 00 00 00 00       	mov    $0x0,%eax
    1767:	eb ae                	jmp    1717 <phase_3+0x5e>
    1769:	b8 00 00 00 00       	mov    $0x0,%eax
    176e:	eb ac                	jmp    171c <phase_3+0x63>
    1770:	b8 00 00 00 00       	mov    $0x0,%eax
    1775:	eb aa                	jmp    1721 <phase_3+0x68>
    1777:	b8 00 00 00 00       	mov    $0x0,%eax
    177c:	eb a8                	jmp    1726 <phase_3+0x6d>
    177e:	b8 00 00 00 00       	mov    $0x0,%eax
    1783:	eb a6                	jmp    172b <phase_3+0x72>
    1785:	b8 00 00 00 00       	mov    $0x0,%eax
    178a:	eb a4                	jmp    1730 <phase_3+0x77>
    178c:	e8 92 06 00 00       	call   1e23 <explode_bomb>
    1791:	b8 00 00 00 00       	mov    $0x0,%eax
    1796:	eb 9d                	jmp    1735 <phase_3+0x7c>
    1798:	e8 d3 fa ff ff       	call   1270 <__stack_chk_fail@plt>
