--author Khoa Nguyen <khoand@zigvy.com>

--title Setup Dev Environment
--center w/ me

--date today

--withborder
A good environment helps us develop quick, easy, and be cool.


--center Let's get started!

--newpage

--title Homebrew

--center Homebrew installs the stuff you need that Apple didn't

"To install, drag this icon..." no more.

--beginshelloutput
$ brew install git
--endshelloutput

--newpage
--title Developer Tools
--center Visual Studio Code - Open Source

--beginshelloutput
$ brew cask install visual-studio-code
--endshelloutput

* IntelliSense
* Debugging
* Built-in Git
* Extensions

- Microsoft

--newpage

--center Settings
// in settings.json
"editor.renderWhitespace": "all",
"eslint.autoFixOnSave": true

// in keybindings.json
{
  "key": "f3",
  "command": "eslint.executeAutofix"
}

Thank you 
--color cyan
thanhdat301

--newpage
--heading Terminal

--title iTerm
--center Terminal emulator

* split panes

cmd + d for horizontal pane.
cmd + shift + d for vertically pane.

Most of the "magic" comes from Zsh!

--newpage
--heading Shell
--title Zsh - Z Shell

* plugin and theme


--newpage
--title Fira Code
I use the
--color yellow
Fira Code
font for my terminal


--newpage
--heading Design
--title Sketch

I use
--color #cf92b7
Sketch
or all of my screenshot


--beginshelloutput
$ brew cask install sketch
--endshelloutput




--newpage

--title nvm - Node Version Manager

--center Simple bash script to manage multiple node.js versions








