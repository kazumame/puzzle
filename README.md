# puzzle

・動作環境 　Eclipse 　 ・開発環境 　Eclipse(C言語)

・プロジェクト内容 15パズルを作成した。

・プロジェクトを動作させるために「glライブラリ」を使う準備をする必要がある
（手順）
1．Eclipse内でpuzzleプロジェクトをインポートし、プロジェクトを右クリックする
2．「プロパティー」を選択→「C/C++ビルド」の左の三角をクリック→その中の「設定」を選択
3．「Cross GCC Linker」を選択する
4．「コマンド行パターン」の最後に以下を追加する．コピペすると文字化けする恐れがある
  `pkg-config --libs gtk+-2.0` -rdynamic

5．「Cross GCC Linker」の中の「ライブラリー」を選択する
6．「ライブラリー」欄の＋ボタンをクリックし、「gl」を追加する（glと入力する）
7．「ライブラリー検索パス」欄の＋ボタンをクリックする
8．「ワークスペース...」ボタンをクリックして15パズルのプロジェクトを選択する
