//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CustomTextView, NSString;

@interface CodeInputView : UIView <UITextViewDelegate, UIGestureRecognizerDelegate>
{
    NSString *_captcha;
    NSString *_phone;
    CDUnknownBlockType _inputViewBlock;
    UIView *_codeBGView;
    CustomTextView *_textView;
}

@property(retain, nonatomic) CustomTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *codeBGView; // @synthesize codeBGView=_codeBGView;
@property(copy, nonatomic) CDUnknownBlockType inputViewBlock; // @synthesize inputViewBlock=_inputViewBlock;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *captcha; // @synthesize captcha=_captcha;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)tapSuperView:(id)arg1;
- (void)endEdit;
- (void)beginEdit;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

