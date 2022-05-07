#include <stdio.h>
#include <stdlib.h>

int ending(void);

int main(void){
	int girl, love, date, nittei;
	int mushi;
	printf("女の子が前からやってきた！話しかける？\nはい:1\tいいえ:0\n;");
	scanf("%d", &girl);
	
	if (girl == 1){

		printf("女の子「なに？」\n\n");
		printf("[1]これ落としたよ...\n");
		printf("[2]こんなところで何してるの？\n");
		printf("[3]今度遊びに行かない？\n");
		printf("[4]付き合ってください！\n");
		scanf("%d", &love);
		switch (love)
		{
		case 1:
		{
			getchar();
			printf("女の子「そんなもの私のじゃない！」\n");
			getchar();
			printf("女の子は逃げてどこかに行ってしまった...\n");
			break;
		}
		case 2:
		{
			getchar();
			printf("女の子「やだ、詮索しないで」\n");
			getchar();
			printf("女の子は逃げてどこかに行ってしまった...\n");
			break;
		}
		case 3:
		{
			getchar();
			printf("女の子「え？急に？」\n");
			getchar();
			printf("男の子「ごめん...」\n");
			getchar();
			printf("女の子「う～ん例えば？」\n");
			getchar();
			printf("僕は何にも考えてなかった。どうしよう。\n");
			getchar();
			printf("[1]あ～動物園とか？\n");
			printf("[2]あ～水族館とか？\n");
			printf("[3]あ～遊園地とか？\n");
			printf("[4]あ～厚木とか？\n");
			scanf("%d",&date);
			switch(date)
			{
				case 1:
					{
						printf("えぇ...?\n");
						getchar();
						printf("動物園？\n");
						getchar();
						printf("センスないんだね\n");
						getchar();
						printf("私行かなきゃだから。じゃあね\n");
						getchar();
						printf("女の子は去っていった。\n");
						break;
					}
				case 2:
					{
						printf("えぇ...?\n");
						getchar();
						printf("水族館？\n");
						getchar();
						printf("センスないんだね\n");
						getchar();
						printf("私行かなきゃだから。じゃあね\n");
						getchar();
						printf("女の子は去っていった。\n");
						break;	
					}
				case 3:
					{
						printf("えぇ...?\n");
						getchar();
						printf("遊園地？\n");
						getchar();
						printf("私遊園地とか、好きじゃないんだよね\n");
						getchar();
						printf("私行かなきゃだから。じゃあね\n");
						getchar();
						printf("女の子は去っていった。\n");
						break;	
					}
				case 4:
					{
						printf("女の子「えぇ...?」\n");
						getchar();
						printf("女の子「厚木？」\n");
						getchar();
						printf("女の子「あ～いいね。」\n");
						printf("女の子「それっていつ行くの？」\n");
						getchar();
						printf("またしても僕は何も考えていなかった。\n\n");
                        getchar();
						printf("[1]火曜日の３限が終わってからとか...?\n");
						printf("[2]火曜日の３限が終わってからとか...?\n");	
						printf("[3]火曜日の３限が終わってからとか...?\n");	
						printf("[4]火曜日の３限が終わってからとか...?\n");

						switch(nittei)
						case 1:
						case 2:
						case 3:
						case 4:
							printf("女の子「ごめん火曜空いてるかわかんない、、\n");
							getchar();
							printf("もしかしたら別のサークル見に行ったりするかもしれないから\n");
                            getchar();
                            printf("なんともいえない！");
                            getchar();
                            printf("ごめん。」\n");
							getchar();
							printf("僕「そっか、ごめん急に誘っちゃって...\n");
							getchar();
							printf("女の子「とんでもない！\n誘ってくれてうれしかったー\n");
							getchar();
							printf("女の子「またタイミングがあれば行こう！」\n");
							getchar();
							printf("僕は童貞なので断られても嬉しくなった。");
							getchar();
							printf("でもこれが社交辞令であることを忘れてはいけない");
							getchar();
							printf("それじゃ");
							getchar();
							printf("僕は彼女と別れた。");
							getchar();
							printf("多分二度と会うことはないと思う。\n\n");
							printf("								\n");
							printf("								\n");
							printf("				happy end		\n");
							getchar();
						break;	
					}

			}
			break;
		}
		case 4:
		{
			printf("女の子「キャーーー痴漢！！！」\n");
			getchar();
			printf("僕は警察に捕まってしまった...\n");
			break;
		}
		default:{
			printf("誰かに後ろから殴られて気絶してしまった。");
			break;
			}
		}
	}else if( girl == 0 ){
	
       int love,yabai;
	   int i,j,k;
       getchar();
       printf("僕は走って逃げた");
       getchar();
       printf("痛ぁ！\n");
       getchar();
       printf("女の子「あ痛たたた..」\n");
       getchar();
       printf("僕は女の子とぶつかってしまったみたい。\n");
       getchar();
       printf("女の子「大丈夫？」");
       getchar();
       printf("僕「う....うん.........」\n");
       getchar();
       printf("びっし！！！");
       getchar();
       printf("僕は素早く立ち上がった。");
       getchar();
       printf("女の子の白いパンツが見えてしまったからだ\n");
       getchar();
       printf("僕「はぁ....はぁ......」");
       getchar();
       printf("やばい、興奮しすぎて息が切れる...\n");
       getchar();
       printf("女の子「大丈夫？凄い息がきれてるけど」\n");
       getchar();
       printf("女の子が僕の頬を触る");
       getchar();
      for ( i = 0; i < 500; i++) {printf("う");};
      for ( j = 0; j < 2500; j++) {printf("あ");};
      for ( k = 0; k < 500; k++) {printf("ぁ");};
        getchar();
        printf("僕「ふんっっっ」\n");
        getchar();
        printf("僕はその手を振り払った");
        getchar();
        printf("あ、やべっ");
        getchar();
        printf("目の前の女の子が不安そうな顔をしている。");
        getchar();
        printf("やばい。どうする。\n");
        getchar();
        printf("[1] アハハ！虫がいたからさ...\n");
        printf("[2] ごめん。驚いちゃって...\n");
        printf("[3] やめてくれる？　そういうの。\n\n");
		scanf("%d",&yabai);

        switch (yabai)
        {
    		case 1:{
				getchar();
            	printf("女の子「え、あ、そうなの？」");
            	getchar();
            	printf("僕「う、うん..」");
            	getchar();
            	printf("女の子「.....」");
            	getchar();
            	printf("僕「........」");
            	getchar();
            	printf("圧倒的沈黙");
            	getchar();
            	printf("やばい、何か話さなきゃ");
				getchar();
				printf("[1] 虫とか好き？\n");
				printf("[2] なんかお詫びに奢るよ\n");
				printf("[3] それじゃ...\n");
				scanf("%d",&mushi);
				switch (mushi)
				{
			    case 1:{
						getchar();
						printf("僕「虫とか好き？」");
						getchar();
						printf("女の子「え？全然！」");
						getchar();
						printf("女の子「むしろ嫌い」");
						getchar();
						printf("僕「そ、そっか～」");
						getchar();
						printf("僕「ぼくもだな～        ﾃﾍﾍ..」");
						getchar();
						printf("女の子「.....」");
						getchar();
						printf("僕「..............」");
						getchar();
						printf("僕「そ、それじゃ......」");
						getchar();
						printf("僕は女の子と別れた。");
						printf("					\n				奇人end");
						getchar();
						exit(0);
						break;
						}
				case 2:{
					    printf("僕「なんかお詫びに奢るよ」\n");
					    getchar();
					    printf("女の子「えぇ～　全然大したことしてないから」");
					    getchar();
					    printf("僕「あいや、奢る奢る」");
					    getchar();
					    printf("女の子「あ～」");
					    getchar();
					    printf("女の子「いいよ、私行かなきゃだから」");
					    getchar();
					    printf("僕「へ？」");
					    getchar();
					    printf("女の子「それじゃ！じゃあね！」");
					    getchar();
					    printf("\n女の子は元気に去っていった。");
					    printf("\n						\n			策略end");
						getchar();
						exit(0);
						}
				case 3:{
						printf("僕「それじゃ...」\n");
						getchar();
						printf("女の子「.....」");
						getchar();
						printf("僕は来た道を戻って彼女から去った。");
						printf("\n						\n			鬱end");
						getchar();
						exit(0);
						break;
						}
				default:{
					getchar();
					printf("死んでしまった。");
					break;
						}
				}
					}
    	   	case 2:{
					getchar();
					printf("僕「ごめん。驚いちゃって..」");
					getchar();
        		    printf("女の子「あ、ごめんなさい」\n");
        		    getchar();
        		    printf("僕「いやいや、ぜんぜん」");
        		    getchar();
        		    printf("女の子「あっ、やっぱ血出てますよ」");
        		    getchar();
        		    printf("僕「え？」");
        		    getchar();
        		    printf("頬を手で触ってみると、確かに血が出ていた");
        		    getchar();
        		    printf("女の子「まずいですよ！」");
        		    getchar();
        		    printf("女の子は僕を驚かせないように、そっと頬の血を拭ってくれた。」");
        		    getchar();
        		    printf("なんてやさしい女の子なんだろう");
        		    getchar();
        		    printf("僕は勃起した");
        		    getchar();
					printf("僕「うぉお..」");
					getchar();
					printf("僕は気持ちよすぎてイッてもうた");
					getchar();
					printf("\n					\n				射精end");
					getchar();
					exit(0);
					break;
			 	    }
			case 3:{
					getchar();
        		   	printf("僕「やめてくれる？　そういうの」");
					getchar();
					printf("女の子「.....」");
					getchar();
					printf("僕は来た道を戻って彼女から去った。");
					printf("\n						\n			地獄end");
					getchar();
					break;
					}
     	   default:{
					printf("誰かに後ろから殴られて死んでしまった。");
					break;
     	   		   }
		}
	
	}else{
		printf("誰かに殺された.");
	}

	return 0;
}	

