#include <kdebug.h>

#include "documentPage.h"

documentPage::documentPage() 
{
  sourceHyperLinkList.reserve(200);
  textLinkList.reserve(250);
  pageNumber = 0;
  isPixmapSet = false;
}


documentPage::~documentPage()
{
  ;
}


void documentPage::setPageNumber(Q_UINT16 pnr)
{
  if (pageNumber != pnr) {
    pageNumber = pnr;
    clear();
  }
}


void documentPage::clear()
{
  sourceHyperLinkList.clear();
  textLinkList.clear();
  hyperLinkList.clear();
  
  isPixmapSet = false;
  bool flag = pixmap.isNull();
  pixmap.resize(0, 0);
  if (flag != true)
    emit (pixmapChanged());
}


QPixmap *documentPage::getPixmap()
{
  if (isPixmapSet == true)
    return &pixmap;
  else
    return 0;
}


void documentPage::setPixmap(const QPixmap &pm)
{
  pixmap = pm; 
  isPixmapSet = true;
  emit (pixmapChanged());
};

#include "documentPage.moc"
