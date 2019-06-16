function Hd = Filtro_tono_7_LP
%FILTRO_TONO_7_LP Returns a discrete-time filter object.

% MATLAB Code
% Generated by MATLAB(R) 9.2 and the DSP System Toolbox 9.4.
% Generated on: 11-Jun-2019 22:02:19

% Elliptic Bandpass filter designed using FDESIGN.BANDPASS.

% All frequency values are in Hz.
Fs = 48000;  % Sampling Frequency

N      = 2;     % Order
Fpass1 = 1460;  % First Passband Frequency
Fpass2 = 1610;  % Second Passband Frequency
Apass  = 1;     % Passband Ripple (dB)
Astop  = 80;    % Stopband Attenuation (dB)

% Construct an FDESIGN object and call its ELLIP method.
h  = fdesign.bandpass('N,Fp1,Fp2,Ast1,Ap,Ast2', N, Fpass1, Fpass2, ...
                      Astop, Apass, Astop, Fs);
Hd = design(h, 'ellip');

% [EOF]
