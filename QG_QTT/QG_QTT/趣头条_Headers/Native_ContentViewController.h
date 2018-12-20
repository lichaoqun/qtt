//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QKBaseViewController.h"

#import "IMYWebViewDelegate-Protocol.h"
#import "LCActionSheetDelegate-Protocol.h"
#import "LCFloatViewDelegate-Protocol.h"
#import "LCWebErrorViewDelegate-Protocol.h"
#import "QKCRMangerViewDelegate-Protocol.h"
#import "TSWebViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "articlePieChartViewDelegate-Protocol.h"

@class IMYWebView, IncomeNoticeView, JavaScriptOC, LCBaseTableView, LCFloatView, NJKWebViewProgressView, NSArray, NSDate, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, QKChannel, QKContentModel, QKContentToolBar, QKReadAntiCheatingManager, QKReadAntiCheatingModel, QKReadAntiCheatingView, QKRedView, SDTimeLineCellCommentItemModel, UIButton, UITextField, UIView, articlePieChartView, floatingView, read_conf_Model;

@interface Native_ContentViewController : QKBaseViewController <UITableViewDataSource, UITableViewDelegate, UIWebViewDelegate, IMYWebViewDelegate, LCActionSheetDelegate, LCWebErrorViewDelegate, QKCRMangerViewDelegate, UITextFieldDelegate, TSWebViewDelegate, articlePieChartViewDelegate, LCFloatViewDelegate>
{
    double _oldPanOffsetY;
    _Bool _is_loading;
    _Bool _is_report_read_time;
    _Bool _is_js_called;
    long long _cdn_ecount;
    NJKWebViewProgressView *_progressView;
    double _totalKeybordHeight;
    NSDate *_contentInitTime;
    long long _contentLoadStyle;
    _Bool _isContetLoadTimeReport;
    _Bool _isReplayingComment;
    _Bool _valid;
    _Bool _webLoaded;
    _Bool _tj_unfold;
    _Bool _is_effectiveness_report;
    _Bool _isPlaceholderAnimating;
    _Bool _readTimerRight;
    _Bool _isRed;
    _Bool _isLittleComment;
    int _ad_skip;
    int _ad_loading;
    QKContentModel *_contentModel;
    QKContentModel *_fromContentModel;
    QKChannel *_channelModel;
    NSString *_callback;
    NSIndexPath *_currentEditingIndexthPath;
    QKContentToolBar *_toolBar;
    LCBaseTableView *_tableView;
    UIView *_placeholderView;
    JavaScriptOC *_javaScript;
    IMYWebView *_webView;
    NSString *_request_url;
    NSMutableDictionary *_dataSource;
    NSDate *_startDate;
    UITextField *_textField;
    UIView *_textFieldBackground;
    SDTimeLineCellCommentItemModel *_currentReplyTargetModel;
    NSString *_commentToUser;
    NSMutableArray *_content_ids;
    long long _page;
    UIButton *_clickLoadMoreBtn;
    NSArray *_currentPageCommentList;
    articlePieChartView *_pieChartView;
    read_conf_Model *_readConfModel;
    floatingView *_floatingView;
    LCFloatView *_lcFloatView;
    QKReadAntiCheatingView *_readAntiCheatingView;
    QKReadAntiCheatingManager *_readAntiCheatingManager;
    QKReadAntiCheatingModel *_readAntiCheatingModel;
    QKRedView *_redView;
    IncomeNoticeView *_incomeNoticeView;
}

@property(retain, nonatomic) IncomeNoticeView *incomeNoticeView; // @synthesize incomeNoticeView=_incomeNoticeView;
@property(nonatomic) _Bool isLittleComment; // @synthesize isLittleComment=_isLittleComment;
@property(nonatomic) _Bool isRed; // @synthesize isRed=_isRed;
@property(retain, nonatomic) QKRedView *redView; // @synthesize redView=_redView;
@property(retain, nonatomic) QKReadAntiCheatingModel *readAntiCheatingModel; // @synthesize readAntiCheatingModel=_readAntiCheatingModel;
@property(retain, nonatomic) QKReadAntiCheatingManager *readAntiCheatingManager; // @synthesize readAntiCheatingManager=_readAntiCheatingManager;
@property(retain, nonatomic) QKReadAntiCheatingView *readAntiCheatingView; // @synthesize readAntiCheatingView=_readAntiCheatingView;
@property(nonatomic) _Bool readTimerRight; // @synthesize readTimerRight=_readTimerRight;
@property(retain, nonatomic) LCFloatView *lcFloatView; // @synthesize lcFloatView=_lcFloatView;
@property(retain, nonatomic) floatingView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) read_conf_Model *readConfModel; // @synthesize readConfModel=_readConfModel;
@property(nonatomic) __weak articlePieChartView *pieChartView; // @synthesize pieChartView=_pieChartView;
@property(nonatomic) _Bool isPlaceholderAnimating; // @synthesize isPlaceholderAnimating=_isPlaceholderAnimating;
@property(copy, nonatomic) NSArray *currentPageCommentList; // @synthesize currentPageCommentList=_currentPageCommentList;
@property(nonatomic) __weak UIButton *clickLoadMoreBtn; // @synthesize clickLoadMoreBtn=_clickLoadMoreBtn;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) _Bool is_effectiveness_report; // @synthesize is_effectiveness_report=_is_effectiveness_report;
@property(nonatomic) int ad_loading; // @synthesize ad_loading=_ad_loading;
@property(nonatomic) int ad_skip; // @synthesize ad_skip=_ad_skip;
@property(nonatomic) _Bool tj_unfold; // @synthesize tj_unfold=_tj_unfold;
@property(nonatomic) _Bool webLoaded; // @synthesize webLoaded=_webLoaded;
@property(retain, nonatomic) NSMutableArray *content_ids; // @synthesize content_ids=_content_ids;
@property(retain, nonatomic) NSString *commentToUser; // @synthesize commentToUser=_commentToUser;
@property(retain, nonatomic) SDTimeLineCellCommentItemModel *currentReplyTargetModel; // @synthesize currentReplyTargetModel=_currentReplyTargetModel;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) _Bool isReplayingComment; // @synthesize isReplayingComment=_isReplayingComment;
@property(retain, nonatomic) UIView *textFieldBackground; // @synthesize textFieldBackground=_textFieldBackground;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSMutableDictionary *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *request_url; // @synthesize request_url=_request_url;
@property(retain, nonatomic) IMYWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) JavaScriptOC *javaScript; // @synthesize javaScript=_javaScript;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) LCBaseTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) QKContentToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) NSIndexPath *currentEditingIndexthPath; // @synthesize currentEditingIndexthPath=_currentEditingIndexthPath;
@property(copy, nonatomic) NSString *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) QKChannel *channelModel; // @synthesize channelModel=_channelModel;
@property(retain, nonatomic) QKContentModel *fromContentModel; // @synthesize fromContentModel=_fromContentModel;
@property(retain, nonatomic) QKContentModel *contentModel; // @synthesize contentModel=_contentModel;
- (void).cxx_destruct;
- (void)appOutBackstage;
- (void)appInBackstage;
- (void)webviewHide;
- (void)webviewShow;
- (id)currentPageInfo;
- (void)postNotificationForResetSDCellCommentState;
- (void)didReport;
- (void)didReload;
- (void)redPacket:(id)arg1;
- (void)showCoinValue:(id)arg1 message:(id)arg2;
- (void)onComment:(id)arg1;
- (void)login:(id)arg1;
- (void)loginCallBack;
- (void)showError:(id)arg1 webView:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didCreateJavaScriptContext:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)CRMangerUnlike:(id)arg1;
- (void)CRMangerReport:(id)arg1;
- (void)onToolComment:(id)arg1;
- (void)storeAction;
- (void)shareAction;
- (void)showFonts;
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
- (void)foldReply;
- (void)replaceObject:(id)arg1 indexPath:(id)arg2;
- (id)modelAtIndexPath:(id)arg1;
- (double)cellContentViewWith;
- (_Bool)existRecommend;
- (_Bool)existComment;
- (void)loadComments:(int)arg1;
- (void)loadMore;
- (void)unfoldRecommend;
- (void)hiddeClickLoadMoreBtnLoading;
- (void)showClickLoadMoreBtnLoading;
- (void)loadRecommend;
- (void)loadAdvert:(id)arg1;
- (void)showArticleNotFoundView;
- (void)loadContent;
- (void)startRequest;
- (void)doWebLoadFinish;
- (void)load;
- (void)handleLoadHtmlStringTimeout;
- (void)adjustTableViewToFitKeyboardWithRect:(struct CGRect)arg1;
- (void)adjustTableViewToFitKeyboard;
- (void)reload;
- (void)notification_reload_subcript:(id)arg1;
- (void)notification_comment:(id)arg1;
- (void)updateWebViewUI:(double)arg1;
- (void)updateWebViewHeightForce:(_Bool)arg1;
- (void)contentFontChanged;
- (void)replyComment:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)contentView;
- (void)contetRead;
- (void)effectivenessReadReport;
- (void)search:(id)arg1;
- (void)closeAction;
- (void)popped;
- (void)back;
- (void)setupTextField;
- (void)updateToolBar;
- (void)updateToolBarIfExist;
- (void)setupToolBar;
- (void)loadTableView_Footer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)webViewEx;
- (id)tableViewEx;
- (void)setupUI;
- (void)handleUIApplicatioDidEnterBackground:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)removeAppACtiveObservers;
- (void)addAppACtiveObservers;
- (void)reportReadTimeDuration;
- (void)recordReadTimeDuration;
- (void)initReportReadDuration;
- (void)dealPvReport;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)endPlayVideo:(id)arg1;
- (void)floatViewDidEndMove:(id)arg1;
- (void)floatViewDidMove:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)pieChartNodePause:(float)arg1;
- (void)pieChartFull:(float)arg1;
- (void)pieChartProgress:(float)arg1;
- (void)pieChartSelectMothod;
- (void)startTimerAnimation;
- (void)showPieChartView;
- (_Bool)isReadTimerRight;
- (struct CGRect)updateFloatingPoint;
- (void)readTimerConfig;
- (void)startTimerAnimation:(id)arg1;
- (void)nextReadtimer;
- (void)currentReadtimer;
- (double)redViewLengthLimitWithWebHeight:(double)arg1;
- (double)lengthLimitWithWebHeight:(double)arg1;
- (void)judgePositionAddRedView;
- (void)readAntiCheatingRequest;
- (void)configReadAntiCheating;
- (void)removeIncomeNoticeView;
- (void)addIncomeNoticeView;
- (void)readingFloatViewConfig;
- (void)configRedView;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

