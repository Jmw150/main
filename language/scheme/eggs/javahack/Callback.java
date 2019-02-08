public class Callback
{
    public static Object invoke(jsint.Procedure proc, Object x) {
	return proc.apply(new jsint.Pair(x, jsint.Pair.EMPTY));
    }
}
