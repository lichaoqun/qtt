//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QKBaseViewController.h"

#import "LCFloatViewDelegate-Protocol.h"
#import "QKCRMangerViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "VideoPlayerControllerDelegate-Protocol.h"
#import "videoPieChartViewDelegate-Protocol.h"

@class IncomeNoticeView, LCFloatView, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, Native_VideoHeaderView, QKChannel, QKContentModel, QKContentToolBar, QKReadAntiCheatingManager, QKReadAntiCheatingView, QKRedView, SDTimeLineCellCommentItemModel, UIButton, UITableView, UITextField, UIView, VideoPlayerController, floatingView, read_conf_Model, videoPieChartView;

@interface Native_VideoViewController : QKBaseViewController <UITableViewDelegate, UITableViewDataSource, QKCRMangerViewDelegate, VideoPlayerControllerDelegate, UITextFieldDelegate, videoPieChartViewDelegate, LCFloatViewDelegate>
{
    double _oldPanOffsetY;
    _Bool _is_report_read_time;
    double _totalKeybordHeight;
    _Bool _isLoadContentFail;
    long long _statusBarStyle;
    long long _loadNextVideoCount;
    _Bool _inActive;
    _Bool _isReplayingComment;
    _Bool _is_auto;
    _Bool _is_first_video;
    _Bool _readTimerRight;
    _Bool _watchComplete;
    _Bool _isRed;
    _Bool _isLittleComment;
    int _ad_skip;
    int _ad_loading;
    int _tj_unfold;
    QKContentModel *_videoModel;
    QKChannel *_channelModel;
    NSIndexPath *_currentEditingIndexthPath;
    long long _page;
    UITableView *_tableView;
    Native_VideoHeaderView *_videoHeaderView;
    QKContentToolBar *_toolBar;
    UIView *_iphoneXTop;
    VideoPlayerController *_player;
    NSMutableDictionary *_dataSource;
    UITextField *_textField;
    UIView *_textFieldBackground;
    NSString *_commentToUser;
    SDTimeLineCellCommentItemModel *_currentReplyTargetModel;
    NSMutableArray *_content_ids;
    UIButton *_clickLoadMoreBtn;
    NSArray *_currentPageCommentList;
    videoPieChartView *_pieChartView;
    read_conf_Model *_readConfModel;
    floatingView *_floatingView;
    LCFloatView *_lcFloatView;
    QKReadAntiCheatingView *_readAntiCheatingView;
    QKReadAntiCheatingManager *_readAntiCheatingManager;
    QKRedView *_redView;
    IncomeNoticeView *_incomeNoticeView;
}

@property(retain, nonatomic) IncomeNoticeView *incomeNoticeView; // @synthesize incomeNoticeView=_incomeNoticeView;
@property(nonatomic) _Bool isLittleComment; // @synthesize isLittleComment=_isLittleComment;
@property(nonatomic) _Bool isRed; // @synthesize isRed=_isRed;
@property(retain, nonatomic) QKRedView *redView; // @synthesize redView=_redView;
@property(retain, nonatomic) QKReadAntiCheatingManager *readAntiCheatingManager; // @synthesize readAntiCheatingManager=_readAntiCheatingManager;
@property(retain, nonatomic) QKReadAntiCheatingView *readAntiCheatingView; // @synthesize readAntiCheatingView=_readAntiCheatingView;
@property(nonatomic) _Bool watchComplete; // @synthesize watchComplete=_watchComplete;
@property(nonatomic) _Bool readTimerRight; // @synthesize readTimerRight=_readTimerRight;
@property(retain, nonatomic) LCFloatView *lcFloatView; // @synthesize lcFloatView=_lcFloatView;
@property(retain, nonatomic) floatingView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) read_conf_Model *readConfModel; // @synthesize readConfModel=_readConfModel;
@property(nonatomic) __weak videoPieChartView *pieChartView; // @synthesize pieChartView=_pieChartView;
@property(copy, nonatomic) NSArray *currentPageCommentList; // @synthesize currentPageCommentList=_currentPageCommentList;
@property(nonatomic) _Bool is_first_video; // @synthesize is_first_video=_is_first_video;
@property(nonatomic) _Bool is_auto; // @synthesize is_auto=_is_auto;
@property(nonatomic) __weak UIButton *clickLoadMoreBtn; // @synthesize clickLoadMoreBtn=_clickLoadMoreBtn;
@property(nonatomic) int tj_unfold; // @synthesize tj_unfold=_tj_unfold;
@property(nonatomic) int ad_loading; // @synthesize ad_loading=_ad_loading;
@property(nonatomic) int ad_skip; // @synthesize ad_skip=_ad_skip;
@property(retain, nonatomic) NSMutableArray *content_ids; // @synthesize content_ids=_content_ids;
@property(retain, nonatomic) SDTimeLineCellCommentItemModel *currentReplyTargetModel; // @synthesize currentReplyTargetModel=_currentReplyTargetModel;
@property(retain, nonatomic) NSString *commentToUser; // @synthesize commentToUser=_commentToUser;
@property(nonatomic) _Bool isReplayingComment; // @synthesize isReplayingComment=_isReplayingComment;
@property(retain, nonatomic) UIView *textFieldBackground; // @synthesize textFieldBackground=_textFieldBackground;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSMutableDictionary *dataSource; // @synthesize dataSource=_dataSource;
@property(retain) VideoPlayerController *player; // @synthesize player=_player;
@property(retain, nonatomic) UIView *iphoneXTop; // @synthesize iphoneXTop=_iphoneXTop;
@property(retain, nonatomic) QKContentToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) Native_VideoHeaderView *videoHeaderView; // @synthesize videoHeaderView=_videoHeaderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSIndexPath *currentEditingIndexthPath; // @synthesize currentEditingIndexthPath=_currentEditingIndexthPath;
@property(retain, nonatomic) QKChannel *channelModel; // @synthesize channelModel=_channelModel;
@property(retain, nonatomic) QKContentModel *videoModel; // @synthesize videoModel=_videoModel;
- (void).cxx_destruct;
- (_Bool)getPlayerFullScreen;
- (void)handleUIApplicatioDidEnterBackground:(id)arg1;
- (void)detailPVReport;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)clickAdvert:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)configCommentsCell:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)unfoldRecommend;
- (void)hiddeClickLoadMoreBtnLoading;
- (void)showClickLoadMoreBtnLoading;
- (void)foldReply;
- (void)replaceObject:(id)arg1 indexPath:(id)arg2;
- (id)modelAtIndexPath:(id)arg1;
- (double)cellContentViewWith;
- (void)adjustTableViewToFitKeyboardWithRect:(struct CGRect)arg1;
- (void)adjustTableViewToFitKeyboard;
- (void)destoryPlayer;
- (void)setPauseVideoAuto:(_Bool)arg1;
- (void)showCoinValue:(id)arg1 message:(id)arg2;
- (void)contetRead;
- (void)contentView;
- (void)billingReport;
- (long long)getCurrentVideoIndex;
- (id)getNextWillLoadVideo;
- (void)loadNextVideoIsAutoPlay:(_Bool)arg1;
- (void)showErrorView;
- (void)updateCurrentVideoCellPosition;
- (void)didChangeVideoPlayerState:(int)arg1;
- (void)didPlayNextVideoIsAutoPlay:(_Bool)arg1;
- (void)didPlayEndInThreeSeconds;
- (void)didPlayerError:(id)arg1;
- (void)didPlayerClose;
- (void)didPopRoot;
- (void)didSmallScreenAction;
- (void)didFullScreenAction;
- (void)didPayerEnd;
- (void)didPayerStart;
- (id)QDP_API;
- (id)QTG_API;
- (id)QDP_DOMAIN;
- (id)QTG_DOMAIN;
- (id)videoUrl:(id)arg1 vid:(id)arg2 token:(id)arg3;
- (void)CRMangerUnlike:(id)arg1;
- (void)CRMangerReport:(id)arg1;
- (void)CRMangerViewDismissComplete;
- (_Bool)existRecommend;
- (_Bool)existComment;
- (void)onToolComment:(id)arg1;
- (void)storeAction;
- (void)shareAction;
- (void)showFonts;
- (void)playVideo:(id)arg1;
- (void)addVideoPlayer;
- (void)showArticleNotFoundView;
- (void)reloadMediaInfo;
- (void)loadContent;
- (void)getVideoDetail;
- (void)loadComments:(int)arg1;
- (void)loadMore;
- (void)loadRecommend;
- (void)loadAdvert:(id)arg1;
- (void)startRequest;
- (void)videoStartPlayer:(id)arg1;
- (void)videoStopPlayer:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)applicationWillResignActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)applicationDidBecomeActive;
- (void)replyComment:(id)arg1;
- (void)notification_reload_subcript:(id)arg1;
- (void)contentFontChanged;
- (void)notification_comment:(id)arg1;
- (void)notification_netWork:(id)arg1;
- (void)onPolice;
- (void)onAuthor;
- (void)onFollow:(id)arg1;
- (void)onDislike:(id)arg1;
- (void)onLike:(id)arg1;
- (void)closeAction;
- (void)back;
- (void)setupTextField;
- (void)hideToolBar:(_Bool)arg1;
- (void)updateToolBar;
- (void)updateToolBarIfExist;
- (void)setupToolBar;
- (void)loadTableView_Footer;
- (id)tableHeaderView;
- (id)tableViewEx;
- (double)player_h;
- (void)setupUI;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)popped;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)floatViewDidEndMove:(id)arg1;
- (void)floatViewDidMove:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)pieChartNodePause:(float)arg1;
- (void)pieChartFull:(float)arg1;
- (void)pieChartProgress:(float)arg1;
- (void)pieChartSelectMothod;
- (void)showReadTimer;
- (void)hideReadTimer;
- (void)startTimerAnimation;
- (void)showPieChartView;
- (_Bool)isReadTimerRight;
- (struct CGRect)updateFloatingPoint;
- (void)readTimerConfig;
- (void)startTimerAnimation:(id)arg1;
- (void)nextReadtimer;
- (void)currentReadtimer;
- (double)lengthLimitWithModel:(id)arg1;
- (void)readAntiCheatingRequest;
- (void)configReadAntiCheating;
- (void)hideIncomeNoticeView;
- (void)showIncomeNoticeView;
- (void)removeIncomeNoticeView;
- (void)addIncomeNoticeView;
- (void)readingFloatViewConfig;
- (void)configRedView;
- (void)judgeIsRedView;
- (void)viewDidLoad;
- (void)_addNotification;
- (id)initWithModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

