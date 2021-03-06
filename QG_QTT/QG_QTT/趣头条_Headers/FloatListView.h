//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSOperationQueue, NSString, NSTimer, UIImageView, UILabel, UIPageControl, UIScrollView;
@protocol FloatListViewDelegate;

@interface FloatListView : UIView <UIScrollViewDelegate>
{
    int _changeMode;
    int _pagePosition;
    NSArray *_imageArray;
    NSArray *_describeArray;
    double _time;
    CDUnknownBlockType _imageClickBlock;
    id <FloatListViewDelegate> _delegate;
    NSMutableArray *_images;
    UILabel *_describeLabel;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    UIImageView *_currImageView;
    UIImageView *_otherImageView;
    long long _currIndex;
    long long _nextIndex;
    NSTimer *_timer;
    NSOperationQueue *_queue;
    struct CGSize _pageImageSize;
}

+ (id)floatListViewWithImageArray:(id)arg1 describeArray:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) struct CGSize pageImageSize; // @synthesize pageImageSize=_pageImageSize;
@property(nonatomic) long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(nonatomic) long long currIndex; // @synthesize currIndex=_currIndex;
@property(retain, nonatomic) UIImageView *otherImageView; // @synthesize otherImageView=_otherImageView;
@property(retain, nonatomic) UIImageView *currImageView; // @synthesize currImageView=_currImageView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *describeLabel; // @synthesize describeLabel=_describeLabel;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(nonatomic) __weak id <FloatListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType imageClickBlock; // @synthesize imageClickBlock=_imageClickBlock;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) NSArray *describeArray; // @synthesize describeArray=_describeArray;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(nonatomic) int pagePosition; // @synthesize pagePosition=_pagePosition;
@property(nonatomic) int changeMode; // @synthesize changeMode=_changeMode;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)changeToNext;
- (void)scrollViewDidScroll:(id)arg1;
- (void)changeCurrentPageWithOffset:(double)arg1;
- (void)clearDiskCache;
- (void)downloadImages:(int)arg1;
- (void)imageClick;
- (void)layoutSubviews;
- (void)nextPage;
- (void)stopTimer;
- (void)startTimer;
- (void)setPageColor:(id)arg1 andCurrentPageColor:(id)arg2;
- (void)setPageImage:(id)arg1 andCurrentPageImage:(id)arg2;
- (void)setDescribeTextColor:(id)arg1 font:(id)arg2 bgColor:(id)arg3;
- (void)setScrollViewContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithImageArray:(id)arg1 imageClickBlock:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1 imageArray:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

