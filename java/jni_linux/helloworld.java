public class helloworld{
	
	private native void print();
	
	static{
		System.loadLibrary("world");
	}
	public static void main(String[] args){
		new helloworld().print();
	}
}
