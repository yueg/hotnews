#include <iostream>
#include "article.h"
#include "article_spool.h"

using namespace std;


int main(int argc, char *argv[]) {
  ArticleSpool *articleSpool = new ArticleSpool();
  articleSpool->Push("123", 0, "", "CP开发商MC云计算");
  articleSpool->Push("123", 0, "", "云计算");
  articleSpool->Push("123", 0, "O2O", "O2M");
  vector<Article> *ret = new vector<Article>;
  articleSpool->GetArticleOfMaxHeat(3, ret);
  articleSpool->UpdateAllArticle();
  articleSpool->GetArticleOfMaxHeat(3, ret);
  cout << ret->size() << endl;
  return 0;
}
