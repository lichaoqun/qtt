//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAGradientLayer, CAShapeLayer, NSString, NSTimer, RedTimeAnimationView, UIBezierPath, UILabel;
@protocol videoPieChartViewDelegate;

@interface videoPieChartView : UIView <CAAnimationDelegate>
{
    _Bool _readingTimeSwitch;
    _Bool _goldFullSwitch;
    _Bool _panAnimationing;
    float _totalTime;
    float _startTime;
    float _durationTime;
    float _limitTime;
    float _nodeCount;
    float _readingTime;
    int _pageStatus;
    NSTimer *_timer;
    id <videoPieChartViewDelegate> _pieChartViewDelegate;
    CAShapeLayer *_outsideLayer;
    CAShapeLayer *_trackLayer;
    CAShapeLayer *_progressLayer;
    CAGradientLayer *_gradientLayer;
    double _lineWidth;
    UIBezierPath *_path;
    UIBezierPath *_outsidePath;
    double _percent;
    double _pathWidth;
    double _sumSteps;
    UILabel *_progressLabel;
    long long _nodeValue;
    RedTimeAnimationView *_redTimeAnimationView;
}

@property(retain, nonatomic) RedTimeAnimationView *redTimeAnimationView; // @synthesize redTimeAnimationView=_redTimeAnimationView;
@property(nonatomic) long long nodeValue; // @synthesize nodeValue=_nodeValue;
@property(nonatomic) int pageStatus; // @synthesize pageStatus=_pageStatus;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(nonatomic) double sumSteps; // @synthesize sumSteps=_sumSteps;
@property(nonatomic) double pathWidth; // @synthesize pathWidth=_pathWidth;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(retain, nonatomic) UIBezierPath *outsidePath; // @synthesize outsidePath=_outsidePath;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *trackLayer; // @synthesize trackLayer=_trackLayer;
@property(retain, nonatomic) CAShapeLayer *outsideLayer; // @synthesize outsideLayer=_outsideLayer;
@property(nonatomic) _Bool panAnimationing; // @synthesize panAnimationing=_panAnimationing;
@property(nonatomic) __weak id <videoPieChartViewDelegate> pieChartViewDelegate; // @synthesize pieChartViewDelegate=_pieChartViewDelegate;
@property(nonatomic) float readingTime; // @synthesize readingTime=_readingTime;
@property(nonatomic) _Bool goldFullSwitch; // @synthesize goldFullSwitch=_goldFullSwitch;
@property(nonatomic) _Bool readingTimeSwitch; // @synthesize readingTimeSwitch=_readingTimeSwitch;
@property(nonatomic) float nodeCount; // @synthesize nodeCount=_nodeCount;
@property(nonatomic) float limitTime; // @synthesize limitTime=_limitTime;
@property(nonatomic) float durationTime; // @synthesize durationTime=_durationTime;
@property(nonatomic) float startTime; // @synthesize startTime=_startTime;
@property(nonatomic) float totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)clearAinimationImageMemory;
- (id)timerImageViewArray;
- (void)timerImageViewAnimationWithCoinValue:(id)arg1;
- (void)resumeLayer:(id)arg1;
- (void)pauseLayer:(id)arg1;
- (void)resumeLayer;
- (void)pauseLayer;
- (void)scrollViewBeginDecelerating;
- (void)timerAction;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)updatePercent;
- (void)didPan:(id)arg1;
- (void)loadGesture;
- (void)loadLayer:(id)arg1 WithColor:(id)arg2;
- (void)free;
- (void)updateUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

