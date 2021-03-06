//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QKBaseViewController.h"

#import "QKCRMangerViewDelegate-Protocol.h"
#import "ShortVideoShareCellDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "VideoPlayerControllerDelegate-Protocol.h"

@class LCBaseTableView, NSArray, NSDate, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, QKContentModel, QKShortVideoContentToolBar, SDTimeLineCellCommentItemModel, ShortVideoChannelViewController, ShortVideoMaskView, ShortVideoPlayNavigationView, ShortVideoPlayTableHeaderView, ShortVideoPreviewView, UIButton, UIImageView, UIScrollView, UITextField, UIView;
@protocol ShortVideoPlayViewControllerDelegate;

@interface ShortVideoPlayViewController : QKBaseViewController <UITableViewDelegate, UITableViewDataSource, QKCRMangerViewDelegate, UIScrollViewDelegate, UITextFieldDelegate, VideoPlayerControllerDelegate, ShortVideoShareCellDelegate>
{
    long long _statusBarStyle;
    double _totalKeybordHeight;
    _Bool _isLikeAnimating;
    _Bool _isNeedShowError;
    _Bool _isReplayingComment;
    _Bool _isVideoPause;
    _Bool _draggingCycle;
    _Bool _isLikeClickMaskShowing;
    int _src;
    long long _markIndex;
    long long _index;
    NSString *_slide;
    NSString *_from_channel;
    NSMutableArray *_shortVideoPlayList;
    NSIndexPath *_currentEditingIndexthPath;
    ShortVideoChannelViewController *_channelVC;
    id <ShortVideoPlayViewControllerDelegate> _delegate;
    QKContentModel *_contentModel;
    UIScrollView *_scrollView;
    NSMutableDictionary *_dataSource;
    LCBaseTableView *_tableView;
    ShortVideoPlayNavigationView *_navigationView;
    QKShortVideoContentToolBar *_toolBar;
    ShortVideoPlayTableHeaderView *_headerView;
    ShortVideoPreviewView *_leftPreviewView;
    ShortVideoPreviewView *_rightPreviewView;
    UIButton *_backButton;
    UIButton *_moreButton;
    long long _page;
    NSArray *_currentPageCommentList;
    UITextField *_textField;
    UIView *_textFieldBackground;
    SDTimeLineCellCommentItemModel *_currentReplyTargetModel;
    NSString *_commentToUser;
    NSMutableArray *_content_ids;
    long long _scrollDirection;
    double _contentOffsetX;
    NSMutableArray *_dislikeContents;
    UIImageView *_likeImgv;
    ShortVideoMaskView *_likeMaskView;
    ShortVideoMaskView *_leftPanMaskView;
    NSDate *_maskViewShowDate;
    struct CGPoint _velocity;
    struct CGPoint _originalTableViewOffset;
}

@property(retain, nonatomic) NSDate *maskViewShowDate; // @synthesize maskViewShowDate=_maskViewShowDate;
@property(nonatomic) _Bool isLikeClickMaskShowing; // @synthesize isLikeClickMaskShowing=_isLikeClickMaskShowing;
@property(retain, nonatomic) ShortVideoMaskView *leftPanMaskView; // @synthesize leftPanMaskView=_leftPanMaskView;
@property(retain, nonatomic) ShortVideoMaskView *likeMaskView; // @synthesize likeMaskView=_likeMaskView;
@property(retain, nonatomic) UIImageView *likeImgv; // @synthesize likeImgv=_likeImgv;
@property(retain, nonatomic) NSMutableArray *dislikeContents; // @synthesize dislikeContents=_dislikeContents;
@property(nonatomic) struct CGPoint originalTableViewOffset; // @synthesize originalTableViewOffset=_originalTableViewOffset;
@property(nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
@property(nonatomic) _Bool draggingCycle; // @synthesize draggingCycle=_draggingCycle;
@property(nonatomic) double contentOffsetX; // @synthesize contentOffsetX=_contentOffsetX;
@property(nonatomic) _Bool isVideoPause; // @synthesize isVideoPause=_isVideoPause;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(retain, nonatomic) NSMutableArray *content_ids; // @synthesize content_ids=_content_ids;
@property(retain, nonatomic) NSString *commentToUser; // @synthesize commentToUser=_commentToUser;
@property(retain, nonatomic) SDTimeLineCellCommentItemModel *currentReplyTargetModel; // @synthesize currentReplyTargetModel=_currentReplyTargetModel;
@property(nonatomic) _Bool isReplayingComment; // @synthesize isReplayingComment=_isReplayingComment;
@property(retain, nonatomic) UIView *textFieldBackground; // @synthesize textFieldBackground=_textFieldBackground;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSArray *currentPageCommentList; // @synthesize currentPageCommentList=_currentPageCommentList;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) ShortVideoPreviewView *rightPreviewView; // @synthesize rightPreviewView=_rightPreviewView;
@property(retain, nonatomic) ShortVideoPreviewView *leftPreviewView; // @synthesize leftPreviewView=_leftPreviewView;
@property(retain, nonatomic) ShortVideoPlayTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) QKShortVideoContentToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) ShortVideoPlayNavigationView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) LCBaseTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableDictionary *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) QKContentModel *contentModel; // @synthesize contentModel=_contentModel;
@property(nonatomic) __weak id <ShortVideoPlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ShortVideoChannelViewController *channelVC; // @synthesize channelVC=_channelVC;
@property(retain, nonatomic) NSIndexPath *currentEditingIndexthPath; // @synthesize currentEditingIndexthPath=_currentEditingIndexthPath;
@property(retain, nonatomic) NSMutableArray *shortVideoPlayList; // @synthesize shortVideoPlayList=_shortVideoPlayList;
@property(nonatomic) int src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *from_channel; // @synthesize from_channel=_from_channel;
@property(copy, nonatomic) NSString *slide; // @synthesize slide=_slide;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long markIndex; // @synthesize markIndex=_markIndex;
- (void).cxx_destruct;
- (void)contentView;
- (void)contetRead;
- (void)didPayerEnd;
- (void)billingReport;
- (void)reportReadTimeDuration;
- (void)hideMask:(long long)arg1 action:(long long)arg2;
- (void)showMask:(long long)arg1;
- (void)recordReadTimeDuration;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)onDislikeModelView:(id)arg1;
- (void)onDislikeModel:(id)arg1 reason:(id)arg2;
- (void)prot_call_dislike;
- (void)CRMangerUnlike:(id)arg1;
- (void)CRMangerReport:(id)arg1;
- (void)onToolComment:(id)arg1;
- (void)commentListAction;
- (void)headerViewDoubleClickAction;
- (void)likeAction;
- (void)storeAction;
- (void)shareAction;
- (void)showFonts;
- (void)setupTextField;
- (void)shortVideoShareComposeToWeixin:(id)arg1;
- (void)shortVideoShareWithType:(long long)arg1 object:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
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
- (_Bool)existComment;
- (void)mediaPlayerEnterForeground:(id)arg1;
- (void)mediaPlayerEnterBackground:(id)arg1;
- (void)adjustTableViewToFitKeyboardWithRect:(struct CGRect)arg1;
- (void)adjustTableViewToFitKeyboard;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)replyComment:(id)arg1;
- (void)notification_reload_list:(id)arg1;
- (void)notification_reload_subcript:(id)arg1;
- (void)contentFontChanged;
- (void)configToolBarCommentListButton;
- (void)notification_comment:(id)arg1;
- (void)commitTranslation:(struct CGPoint)arg1;
- (void)headerViewLeftPanAction:(id)arg1;
- (void)headerViewSwipAction:(id)arg1;
- (void)maskViewTapAction:(id)arg1;
- (void)onAuthor;
- (void)configFollowButton;
- (void)followAction:(id)arg1;
- (void)loadTableView_Footer;
- (void)loadComments:(int)arg1;
- (void)updateNewCommentList:(id)arg1;
- (void)loadMore;
- (void)configContFields:(id)arg1;
- (void)requestContFields;
- (void)updateScrollView;
- (void)createKeyboardNotification;
- (void)removeKeyboardNotification;
- (void)createNotification;
- (void)setupUI;
- (void)createUI;
- (void)setupParam;
- (void)handleUIApplicatioDidEnterBackground:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)videoBehaviorReport;
- (void)back;
- (void)popped;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

