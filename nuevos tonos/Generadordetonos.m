Fs = 44100;
t = 0:1/Fs:40e-3;
freqL = 941;
freqH = 1633;
x1 = 1/2*sin(2*pi*freqL*t);
x2 = 1/2*sin(2*pi*freqH*t);
x= x1+x2;
% write the signal x to a .wav file
audiowrite('D.wav',x,Fs);