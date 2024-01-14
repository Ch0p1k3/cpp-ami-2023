# WSL

!!! Можно не читать мои рассказы и посмотреть инструкцию по установке WSL, которая указана в [задачке multiplication](https://gitlab.com/BigRedEye1/hse-base-cxx-2024/-/tree/main/tasks/multiplication?ref_type=heads#windows-wsl)

Начиная с Windows 10 появилась такая фича как WSL: Windows Subsystem for Linux,
с её помощью можно запускать Linux-приложения на Windows.

Как мне кажется, то это самый легкий способ для пользователей Windows облегчить себе жизнь на курсе по C++. Установка WSL не занимает большого количества времени и в VSCode есть интеграция с ним.

Официальная инструкция по установке: https://learn.microsoft.com/en-us/windows/wsl/install. Смотрите внимательно и пройдите все шаги, [Следует удостовериться](https://learn.microsoft.com/en-us/windows/wsl/install#check-which-version-of-wsl-you-are-running), что вы поставили именно WSL 2. WSL 2 в отличие от WSL 1 на самом деле использует ядро Linux, поддерживает полную совместимость системных вызовов и производительнее.

Также есть туториал, который как по моему мнению лучше простой инструкции по установке. Там в отличие от инструкции по установке немного рассказывают про дистрибутивы. Ставьте [LTS версию 22.04.3 Ubuntu](https://apps.microsoft.com/detail/9PN20MSR04DW?hl=ru-ru&gl=RU).

Далее на основной системе поставьте [VSCode](vscode.md) и следуйте по инструкции о подключении к [WSL в VSCode](https://learn.microsoft.com/en-us/windows/wsl/tutorials/wsl-vscode).

P.S. Но все-таки я бы советовал однажды полноценно пересесть на Linux (я лично пользуюсь Ubuntu, но на лекциях вам советовали ставить Kubuntu). Совсем необязательно сносить Windows, всегда можно поставить Linux второй системой - простой загуглите "ubuntu dual b oot windows" и пойдите по одному из гайдов.
Также я совсем не знаю про интеграцию WSL с CLion, так что рекомендовал бы пользоваться VSCode или как-нибудь "терминальным" текстовым редактором (vim, neovim).
