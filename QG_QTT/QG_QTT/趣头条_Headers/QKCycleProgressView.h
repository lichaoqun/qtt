//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface QKCycleProgressView : UIView
{
    double _progressWith;
    UIColor *_progressColor;
    double _progressStartA;
    double _progressRadius;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double progressRadius; // @synthesize progressRadius=_progressRadius;
@property(nonatomic) double progressStartA; // @synthesize progressStartA=_progressStartA;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) double progressWith; // @synthesize progressWith=_progressWith;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

