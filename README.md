本例子主要演示golang调用c/c++代码。
1. cppdemo直接golang和c/c++代码在一起，比较简单。
2. cppdemo调用静态库xx.a（调用xx.so类似）
注意：
当golang调用一个静态库xx.a时，假如xx.a又依赖xx2.a,需要同时把xx2.a也包含过来
so则不需要;
看cppdemo2里面用了标准c++库，所以#cgo LDFLAGS: -Llib -lmath -lstdc++增加了-lstdc++;

遇到过的情况：
https://blog.csdn.net/aizhangque5011/article/details/101154770
参考：
https://github.com/atercattus/go-static-link-example
https://github.com/shadowmint/go-static-linking
TODO:
下一步有时间准备把opencv和ffmpeg包含进来。