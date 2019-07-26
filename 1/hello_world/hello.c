#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dial BSD/GPL");

static int hello_init(void)
{
    printk(KERN_ALERT "hello world\n");
    return 0;
}

static void hello_exit(void)
{
    printk(KERN_ALERT "bye,cruel world\n");
}
module_init(hello_init);
module_exit(hello_exit);
