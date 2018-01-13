#include <stdio.h>
#include <assert.h>
char *my_strstr(char *msg, char *sub)
{
	char *ret = msg;
	assert(msg);
	assert(sub);
	char *p_sub;
	char *p_msg;
	while (*msg)
	{
		p_sub = sub;
		p_msg = msg;
		while (*p_sub&&*p_msg && (*p_sub == *p_msg))
		{
			p_sub++, p_msg++;
		}
		if (*p_sub == '\0')
		{
			return msg;
		}
		msg++;
	}
	return NULL;

}
int main()
{
	const char *msg = "1234abcd78";
	const char *sub = "abc";
	const char *ret = my_strstr(msg, sub);
	printf("%s\n", ret);
	system("pause");
}