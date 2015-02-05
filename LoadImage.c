#include <cv.h>
#include <highgui.h>


int main( int argc, char** argv ){
	// 実行時の第一引数のファイルをCV_LOAD_IMAGE_COLORの設定値で読み込む
	IplImage* img = cvLoadImage(argv[1], CV_LOAD_IMAGE_COLOR);
	// 表示用のウィンドウをExample1とし、サイズを自動にする
	cvNamedWindow("Example1", CV_WINDOW_AUTOSIZE);
	// 読み込んだファイルをExample1のウィンドウで表示する
	cvShowImage("Example1", img);
	// ユーザからの任意の入力を待つ
	cvWaitKey(0);
	// 任意の入力後に画像情報保持のために確保されれたメモリを開放する
	cvReleaseImage(&img);
	// Example1と名前が付いているウィンドウを破棄する
	cvDestroyWindow("Example1");
}
