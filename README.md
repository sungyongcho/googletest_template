ref:
https://google.github.io/googletest/ (가이드 확인)

https://www.youtube.com/watch?v=0wMNtl2xDT0

bazel plugin:

https://marketplace.visualstudio.com/items?itemName=BazelBuild.vscode-bazel
(관련파일 템플릿 추가, cmd+shift+p 에 bazel 관련 메뉴들 추가)

install go first then install buildifier
brew install buildifier
//go

WORKSPACE 파일과 BUILD파일을 각 위치에 생성
- 주의사항
-> 괄호'들' 조심하자...

#Step 1:

main run 하는법:

```
bazel run src/main:main
```

#step 2:
유닛테스트 만들기

tests 디렉토리에 BUILD 파일 생성 후 TEST() 함수로 만들면 됨

#결과확인
-> bazel-testlogs/tests/tests/test.log

