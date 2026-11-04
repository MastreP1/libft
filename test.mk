NAME = Ahmed

AGE = 20

hello : start me
	echo "hello"

start : 
	echo "START"

me :
	echo "Hello I am $(NAME) I am $(AGE)" 
