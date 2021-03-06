//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class ConfigKeyValue, NSArray, NSString, QKUser, UIDatePicker, UILabel, UIPickerView, UserInfoConfigModel;

@interface CommonPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_sexPicker;
    UIDatePicker *_birthPicker;
    long long _pickerType;
    UILabel *_content;
    NSArray *_dataSource;
    UserInfoConfigModel *_configModel;
    QKUser *_user;
    ConfigKeyValue *_career_value;
    NSArray *_career_info_list;
    ConfigKeyValue *_career_info_value;
    ConfigKeyValue *_edu_value;
    ConfigKeyValue *_sex_value;
    id _callBackModel;
    CDUnknownBlockType _block;
    UIView *_overlayView;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) id callBackModel; // @synthesize callBackModel=_callBackModel;
@property(retain, nonatomic) ConfigKeyValue *sex_value; // @synthesize sex_value=_sex_value;
@property(retain, nonatomic) ConfigKeyValue *edu_value; // @synthesize edu_value=_edu_value;
@property(retain, nonatomic) ConfigKeyValue *career_info_value; // @synthesize career_info_value=_career_info_value;
@property(retain, nonatomic) NSArray *career_info_list; // @synthesize career_info_list=_career_info_list;
@property(retain, nonatomic) ConfigKeyValue *career_value; // @synthesize career_value=_career_value;
@property(retain, nonatomic) QKUser *user; // @synthesize user=_user;
@property(retain, nonatomic) UserInfoConfigModel *configModel; // @synthesize configModel=_configModel;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UILabel *content; // @synthesize content=_content;
@property(nonatomic) long long pickerType; // @synthesize pickerType=_pickerType;
@property(retain, nonatomic) UIDatePicker *birthPicker; // @synthesize birthPicker=_birthPicker;
@property(retain, nonatomic) UIPickerView *sexPicker; // @synthesize sexPicker=_sexPicker;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)save;
- (void)cancel;
- (void)valueChanged:(id)arg1;
- (id)calculateConstellationWithMonth:(long long)arg1 day:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2 userPrivacy:(id)arg3 user:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

