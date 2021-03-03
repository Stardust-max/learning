function pla(filename, lambda)
rng;
l = lambda;
data = load(filename);
%data = data(randperm(max(size(data))), :);
w = zeros(5,1);
isFinished = 0; % 终止标准是全部遍历以后没有误分类，而不是简单的全部遍历一遍。遍历后没有误分类的设定是用连续分类没有出错的个数等于样本数确定的
step = 0;
index = 1;
correctNum = 0;
while (~isFinished)  %从1开始取数据，如果没出错，正确分类+1；如果出错，更新w，正确分类清零。如果index==len，则从头开始
    x_vector = [1, data(index,1:4)];
    x_vector = x_vector';
    y = data(index,5);
    if (Mysign(w' * x_vector) ~= y)
        w = w + l * y * x_vector;
       step = step + 1;
       correctNum = 0;
    else
        correctNum = correctNum+1;
    end
    if (index == 400)
        index = 1;
    else
        index = index+1;
    end
    if (correctNum == 400)
        isFinished = 1;
    end
end
assignin('base','w',w);
assignin('base','step',step);
end