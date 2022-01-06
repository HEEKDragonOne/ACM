@echo off
if "%1"=="" goto loop
copy liaison%1.in liaison.in >nul
echo Problem Test
echo Data %1
time<enter
liaison.exe
time<enter
fc liaison.out liaison%1.out
del liaison.in
del liaison.out
pause
goto quit
:loop
for %%i in (1 2 3 4 5 6 7 8 9 10) do call %0 %%i
:quit
