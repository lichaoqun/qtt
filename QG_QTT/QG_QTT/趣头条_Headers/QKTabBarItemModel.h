//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSString, UIImage;

@interface QKTabBarItemModel : LCBaseModel
{
    _Bool _show;
    NSString *_name;
    NSString *_icon_normal_file;
    NSString *_icon_selected_file;
    NSString *_key;
    long long _sort;
    long long _type;
    long long _need_login;
    NSString *_agreementUrl;
    NSString *_url;
    UIImage *_normalImage;
    UIImage *_selectedImage;
}

@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *agreementUrl; // @synthesize agreementUrl=_agreementUrl;
@property(nonatomic) long long need_login; // @synthesize need_login=_need_login;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long sort; // @synthesize sort=_sort;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *icon_selected_file; // @synthesize icon_selected_file=_icon_selected_file;
@property(retain, nonatomic) NSString *icon_normal_file; // @synthesize icon_normal_file=_icon_normal_file;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)getSelectedImage;
- (id)getNormalImage;
- (id)initWithAttribute:(id)arg1;

@end

