//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, QKHeart, QKUser;

@protocol LCRouterUserServiceProtocol <NSObject>
- (void)rewardToLoginCompletion:(void (^)(_Bool, NSMutableDictionary *))arg1;
- (void)qrcodeScanWithBlock:(void (^)(id))arg1;
- (void)gotoContactPageWithModel:(id)arg1;
- (void)gotoSettingPage;
- (void)gotoProfile;
- (void)gotoLoginWithType:(long long)arg1 fromPage:(long long)arg2 clipboardGif:(id)arg3 scheme:(id)arg4 source:(NSString *)arg5;
- (void)gotoLoginWithType:(long long)arg1 fromPage:(long long)arg2 clipboardGif:(id)arg3 scheme:(id)arg4;
- (void)gotoLoginWithScheme:(id)arg1;
- (void)gotoLoginWithClipboardGif:(id)arg1;
- (void)gotoLoginWithPrama:(NSMutableDictionary *)arg1 withComplete:(void (^)(_Bool, NSMutableDictionary *))arg2;
- (void)gotoLoginWithComplete:(void (^)(_Bool, NSMutableDictionary *))arg1;
- (void)gotoLoginWithSource:(NSString *)arg1;
- (void)gotoLogin;
- (void)add_comment_like_id:(NSString *)arg1;
- (void)setComment_like_ids:(NSMutableArray *)arg1;
- (NSMutableArray *)comment_like_ids;
- (_Bool)is_article_liked:(NSString *)arg1;
- (void)like_article_id:(NSString *)arg1;
- (void)logout:(_Bool)arg1;
- (_Bool)isLogin_gotoIfNot;
- (void)setAutoLogin:(_Bool)arg1;
- (_Bool)showRedDotForMyTab;
- (void)resetUser;
- (void)getMemberInfo:(void (^)(int, id))arg1;
- (void)refresh:(void (^)(int, id))arg1;
- (void)refresh;
- (NSString *)userId;
- (void)setUesr:(id)arg1;
- (QKUser *)user;
- (void)setUserFolderPath:(NSString *)arg1;
- (NSString *)userFolderPath;
- (void)setLiked_ids:(NSMutableArray *)arg1;
- (NSMutableArray *)liked_ids;
- (void)setHeart:(id)arg1;
- (QKHeart *)heart;
- (_Bool)isAutoLogin;
- (NSString *)token;
- (void)setDelegate:(id)arg1;
@end

