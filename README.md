# Program-Design-and-Data-Structure I/II (2021 Fall & 2022 Spring)
Course material release page of CS1958/CS1959 for John Class, SJTU. <br>
**Copy right**: ACM Class 2018

### Lab1: Deque
[Lab1](./Lab1-deque) has been released. <br>

Please implement a double-ended-queue, supporting *fast* insertion, deletion, random access, and iterator. <br>

The API is similar to the vector implemented last semester. <br>

Please submit your code at [OJ_deque](https://acm.sjtu.edu.cn/OnlineJudge/problem?problem_id=1097), and this site contains more information.

#### 具体要求

*fast* 指 deque 要求支持以不超过 `O(sqrt(n))` 的时间完成任意位置的插入和删除，但随机访问的复杂度要求降低为 `O(sqrt(n))`.

评分模式与规则和上学期的Vector相同.

#### Submission
- DDL: 23:59:59 (GMT +08:00), March 27th 2022 (第六周周日)
- Code review is required.

---

### Lab2: Map

请实现一个 map 类, 支持 *快速* 的插入, 查询, 修改, 删除.

需要实现接口包括

- 构造函数, 析构函数
- 重载赋值运算符
- `at`, 下标访问
- `insert` `erase`
- `fine`
- `iterator` `const_iterator`

接口的细节请阅读代码框架中的注释. 

**注意**：多种平衡树都可以通过全部测试, 但是非平衡树无法通过全部测试.

请在[OJ_map](https://acm.sjtu.edu.cn/OnlineJudge/problem?problem_id=1139)提交你的代码.

#### Submission
- DDL: 23:59:59 (GTM +08:00), May 8th 2022 (第十二周周日）
- Code review is required.
