## hydra
### Using wordlists
4 threads is recommended for ssh.
```
hydra -l root -P /usr/share/wordlists/rockyou.txt 192.168.1.105 -t 4 ssh
```
- https://linuxconfig.org/ssh-password-testing-with-hydra-on-kali-linux
