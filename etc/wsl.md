# WSL

!!! Можно не читать мои рассказы и посмотреть инструкцию по установке WSL, которая указана в [задачке multiplication](https://gitlab.com/BigRedEye1/hse-base-cxx-2024/-/tree/main/tasks/multiplication?ref_type=heads#windows-wsl)

Начиная с Windows 10 появилась такая фича как WSL: Windows Subsystem for Linux,
с её помощью можно запускать Linux-приложения на Windows.

Как мне кажется, то это самый легкий способ для пользователей Windows облегчить себе жизнь на курсе по C++. Установка WSL не занимает большого количества времени и в VSCode есть интеграция с ним.

Официальная инструкция по установке: https://learn.microsoft.com/en-us/windows/wsl/install. Также есть туториал, который как по моему мнению лучше простой инструкции по установке. Там в отличие от инструкции по установке немного рассказывают про дистрибутивы. Ставьте [LTS версию 22.04.3 Ubuntu](https://apps.microsoft.com/detail/9PN20MSR04DW?hl=ru-ru&gl=RU).
Но вот список, команд, которые надо выполнить, что установить WSL:
0. (Рекомендуется, но необязательно) Установить [Windows Terminal](https://www.microsoft.com/store/apps/9n0dx20hk701), чтобы красиво пользоваться терминалом на Windows.
1. Открыть PowerShell в режиме администратора и выполнить `wsl --install`, перезапустить компьютер с загрузкой обновлений (это важно, так как иначе будут ошибки).
2. Открыть PowerShell и выполнить `wsl --install -d Ubuntu-22.04`.
3. Запустить Ubuntu-20.04 ([все способы](https://learn.microsoft.com/ru-ru/windows/wsl/install#ways-to-run-multiple-linux-distributions-with-wsl)).
4. Если вы используете VSCode, то он автоматически предложит использовать WSL (также имеется [инструкция](https://www.jetbrains.com/help/clion/how-to-use-wsl-development-environment-in-product.html#wsl-tooclhain) для CLion).

Далее на основной системе поставьте [VSCode](vscode.md) и следуйте по инструкции о подключении к [WSL в VSCode](https://learn.microsoft.com/en-us/windows/wsl/tutorials/wsl-vscode). Либо поставьте `CLion` и следуйте по инструкции о подключении к [WSL в CLion](https://www.jetbrains.com/help/clion/how-to-use-wsl-development-environment-in-product.html?ysclid=lrn8w78p5s627377564).

P.S. Но все-таки я бы советовал однажды полноценно пересесть на Linux (я лично пользуюсь Ubuntu, но на лекциях вам советовали ставить Kubuntu). Совсем необязательно сносить Windows, всегда можно поставить Linux второй системой - простой загуглите "ubuntu dual b oot windows" и пойдите по одному из гайдов.
Также я совсем не знаю про интеграцию WSL с CLion, так что рекомендовал бы пользоваться VSCode или как-нибудь "терминальным" текстовым редактором (vim, neovim).
