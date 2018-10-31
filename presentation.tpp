--author Khoa Nguyen <khoand@zigvy.com>

--date today




--title Setup Dev Environment
--center with me!


--withborder
--center A good environment helps us develop quick, easy, and be cool.

---

--center Let's get started!

--newpage
--title Homebrew

--center Homebrew installs the stuff you need that Apple didn't


---
"To install, drag this icon..." no more.
---

--beginshelloutput
$ brew install git
--endshelloutput

--newpage
--heading Developer Tools

--title Visual Studio Code - Open Source

--center Microsoft

---
  * IntelliSense

  * Debugging

  * Built-in Git

  * Extensions
---

--beginshelloutput
$ brew cask install visual-studio-code
--endshelloutput

--newpage
--heading Visual Studio Code - Open Source

--title Settings
// in settings.json
"editor.renderWhitespace": "all",
"eslint.autoFixOnSave": true

---

// in keybindings.json
{
  "key": "f3",
  "command": "eslint.executeAutofix"
}


---
--beginslideleft
  Thank you 
--color cyan
--boldon
  thanhdat301
--color white
--endslideleft

--newpage
--heading Terminal

--title iTerm
--center Terminal emulator

  * Split panes

---
    cmd + d for horizontal pane.

---
    cmd + shift + d for vertically pane.


--beginshelloutput
$ brew cask install iterm2
--endshelloutput


---
--boldon
Most of the "magic" comes from Zsh!

--newpage
--heading Shell

--title Zsh - Z Shell

---
  * Plugin and theme support

---
  * Tab completion for Git

---
  * Automatic cd

---
  * And more!

---

--beginshelloutput
$ brew install zsh
--endshelloutput


--newpage
--heading Font

--title Fira Code

I use the
--color yellow
Fira Code
--color white
font for my terminal

--beginshelloutput
$ brew tap caskroom/fonts
---
$ brew cask install font-fira-code
--endshelloutput

--newpage
--heading Other stuffs

--title Community

--title Slack

--center Slack is a powerful tool for making team communication fast and easy.
--center <zigvy.slack.com>

---

  #research
---

  #support-114
---

  #time-tracking
---

  #zigvy_f17
---

  #gaming
---

  #hr

---
--beginoutput
$ brew cask install slack
--endoutput

--newpage
--heading Design

--title Sketch

I use
--color magenta
Sketch
--color white
for all of my screenshot

---
--beginoutput
$ brew cask install sketch
--endoutput

--newpage
--title nvm - Node Version Manager

--center Simple bash script to manage multiple node.js versions








