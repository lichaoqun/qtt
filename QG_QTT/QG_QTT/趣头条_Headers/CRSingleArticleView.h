//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel, V5Article;

@interface CRSingleArticleView : UIButton
{
    UILabel *bottomMore;
    UILabel *_articleTitle;
    UIImageView *_articlePic;
    UILabel *_articleDesc;
    V5Article *_article;
    CDUnknownBlockType _articleClickHandler;
    CDUnknownBlockType _articleLongClickHandler;
}

@property(copy, nonatomic) CDUnknownBlockType articleLongClickHandler; // @synthesize articleLongClickHandler=_articleLongClickHandler;
@property(copy, nonatomic) CDUnknownBlockType articleClickHandler; // @synthesize articleClickHandler=_articleClickHandler;
@property(retain, nonatomic) V5Article *article; // @synthesize article=_article;
@property(retain, nonatomic) UILabel *articleDesc; // @synthesize articleDesc=_articleDesc;
@property(retain, nonatomic) UIImageView *articlePic; // @synthesize articlePic=_articlePic;
@property(retain, nonatomic) UILabel *articleTitle; // @synthesize articleTitle=_articleTitle;
- (void).cxx_destruct;
- (void)contentLongClick:(id)arg1;
- (void)contentClick;
- (void)contentWithArticle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

