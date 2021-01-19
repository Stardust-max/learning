clc;clear all;close all
total = zeros(2000,1);
for i = 1:2000
    pla('hw1_15_train.dat', 1);
    total(i) = step;
end