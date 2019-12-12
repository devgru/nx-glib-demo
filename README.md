This is demo build environment.

I'm trying to use `glib-2.0` along with `libnx` from devkitpro.

Usage:

```
rm -rf app/build
cd docker
docker-compose up
```

Expected result: compiled application.

Current actual result:

```
Starting docker_switch-env_1 ... done
Attaching to docker_switch-env_1
switch-env_1  | linking root.elf
switch-env_1  | /opt/devkitpro/devkitA64/lib/gcc/aarch64-none-elf/9.2.0/../../../../aarch64-none-elf/bin/ld: /opt/devkitpro/libnx/lib/libnx.a(switch_crt0.o): relocation R_AARCH64_ADR_PREL_PG_HI21 against symbol `exit@@GLIBC_2.17' which may bind externally can not be used when making a shared object; recompile with -fPIC
switch-env_1  | /opt/devkitpro/devkitA64/lib/gcc/aarch64-none-elf/9.2.0/../../../../aarch64-none-elf/bin/ld: /opt/devkitpro/libnx/lib/libnx.a(switch_crt0.o)(.crt0+0x114): unresolvable R_AARCH64_ADR_PREL_PG_HI21 relocation against symbol `exit@@GLIBC_2.17'
switch-env_1  | /opt/devkitpro/devkitA64/lib/gcc/aarch64-none-elf/9.2.0/../../../../aarch64-none-elf/bin/ld: final link failed: bad value
switch-env_1  | collect2: error: ld returned 1 exit status
switch-env_1  | /opt/devkitpro/libnx/switch_rules:79: recipe for target '/root/root.elf' failed
switch-env_1  | make[1]: *** [/root/root.elf] Error 1
switch-env_1  | Makefile:168: recipe for target 'build' failed
switch-env_1  | make: *** [build] Error 2
docker_switch-env_1 exited with code 2
```