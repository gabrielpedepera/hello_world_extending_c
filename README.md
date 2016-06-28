# Hello World em Ruby estendendo C

Hello World em C, sendo chamado em Ruby. Baseado no post:  [http://www.rubyinside.com/how-to-create-a-ruby-extension-in-c-in-under-5-minutes-100.html](http://www.rubyinside.com/how-to-create-a-ruby-extension-in-c-in-under-5-minutes-100.html)

### Passos

#### 1. Clonar projeto

```bash
git clone git@github.com:gabrielpedepera/hello_world_extending_c.git
```
#### 2. Gerar makefile

```bash
cd hello_world_extending_c/Hello
ruby extconf.rb
```

#### 3. Executar make

```bash
cd hello_world_extending_c/Hello
make
```

#### 4. Executar hello.rb

```bash
cd hello_world_extending_c
ruby hello.rb
# => "Hello World"
```
