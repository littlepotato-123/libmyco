Libco
===========

### 简介
libmyco是c/c++协程库，通过仅有的几个函数接口 co_create/co_resume/co_yield 再配合 co_poll，可以支持同步或者异步的写法，如线程库一样轻松。同时库里面提供了socket族函数的hook，使得后台逻辑服务几乎不用修改逻辑代码就可以完成异步化改造。


### libmyco的特性
- 无需侵入业务逻辑，把多进程、多线程服务改造成协程服务，并发能力得到百倍提升;
- 支持CGI框架，轻松构建web服务(New);
- 支持gethostbyname、mysqlclient、ssl等常用第三库(New);
- 可选的共享栈模式，单机轻松接入千万连接(New);
- 完善简洁的协程编程接口
 * 类pthread接口设计，通过co_create、co_resume等简单清晰接口即可完成协程的创建与恢复；
 * __thread的协程私有变量、协程间通信的协程信号量co_signal (New);
 * 语言级别的lambda实现，结合协程原地编写并执行后台异步任务 (New);
 * 基于epoll/kqueue实现的小而轻的网络框架，基于时间轮盘实现的高性能定时器;



