//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TYSlidePageScrollViewController.h"

@class QKMediaHeader, QKNavigationItem, QKSubcript, TYTitlePageTabBar;

@interface QKSubcriptPageScrollController : TYSlidePageScrollViewController
{
    QKSubcript *_subcript;
    QKSubcript *_att_subcript;
    QKSubcript *_origin_subcript;
    QKMediaHeader *_slidePageHeaderView;
    TYTitlePageTabBar *_titlePageTabBar;
    QKNavigationItem *_attNavigationItem;
}

@property(retain, nonatomic) QKNavigationItem *attNavigationItem; // @synthesize attNavigationItem=_attNavigationItem;
@property(retain, nonatomic) TYTitlePageTabBar *titlePageTabBar; // @synthesize titlePageTabBar=_titlePageTabBar;
@property(retain, nonatomic) QKMediaHeader *slidePageHeaderView; // @synthesize slidePageHeaderView=_slidePageHeaderView;
@property(retain, nonatomic) QKSubcript *origin_subcript; // @synthesize origin_subcript=_origin_subcript;
@property(retain, nonatomic) QKSubcript *att_subcript; // @synthesize att_subcript=_att_subcript;
@property(retain, nonatomic) QKSubcript *subcript; // @synthesize subcript=_subcript;
- (void).cxx_destruct;
- (void)reloadHeaderViewInfo;
- (void)mediaInfo;
- (void)record_read_time;
- (void)slidePageScrollView:(id)arg1 pageTabBarScrollOffset:(double)arg2 state:(unsigned long long)arg3;
- (void)slidePageScrollView:(id)arg1 clickedPageTabBarAtIndex:(long long)arg2;
- (void)slidePageScrollView:(id)arg1 horizenScrollToPageIndex:(long long)arg2;
- (id)createController;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)notification_reload_subcript:(id)arg1;
- (void)dealloc;
- (void)login_Att_action;
- (void)subcriptAction:(id)arg1;
- (void)showMenu;

@end

