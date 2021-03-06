//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, UICollectionView, UIPageControl;
@protocol ImagePlayerViewDelegate;

@interface ImagePlayerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
{
    id <ImagePlayerViewDelegate> _imagePlayerViewDelegate;
    UIPageControl *_pageControl;
    unsigned long long _scrollInterval;
    UICollectionView *_collectionView;
    NSMutableArray *_indexDatasource;
    NSTimer *_autoScrollTimer;
    long long _itemsCount;
    long long _multiNum;
}

@property(nonatomic) long long multiNum; // @synthesize multiNum=_multiNum;
@property(nonatomic) long long itemsCount; // @synthesize itemsCount=_itemsCount;
@property(retain, nonatomic) NSTimer *autoScrollTimer; // @synthesize autoScrollTimer=_autoScrollTimer;
@property(retain, nonatomic) NSMutableArray *indexDatasource; // @synthesize indexDatasource=_indexDatasource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) unsigned long long scrollInterval; // @synthesize scrollInterval=_scrollInterval;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak id <ImagePlayerViewDelegate> imagePlayerViewDelegate; // @synthesize imagePlayerViewDelegate=_imagePlayerViewDelegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)stopTimer;
- (void)startTimer;
- (void)restartTimer;
- (void)handleScrollTimer:(id)arg1;
- (void)didEndScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reloadData;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

