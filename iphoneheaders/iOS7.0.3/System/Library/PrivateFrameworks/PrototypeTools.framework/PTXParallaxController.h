/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/_UISettingsKeyObserver.h>

@class NSHashTable, CMMotionManager, CADisplayLink, PTXParallaxEngineSettings, PTXParallaxReferenceFrame, NSMutableSet;

@interface PTXParallaxController : NSObject <_UISettingsKeyObserver> {

	NSHashTable* _observers;
	CMMotionManager* _motionManager;
	CADisplayLink* _displayLink;
	PTXParallaxEngineSettings* _settings;
	PTXParallaxReferenceFrame* _referenceFrame;
	double _startUpdatesTimestamp;
	BOOL _generatingUpdates;
	NSMutableSet* _suspendReasons;

}
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)start;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_startOrStopGeneratingUpdates;
-(void)_stopGeneratingUpdates;
-(BOOL)_shouldGenerateUpdates;
-(void)_startGeneratingUpdates;
-(void)stop;
-(void)_tearDownDisplayLink;
-(void)addObserver:(id)arg1 ;
-(void)suspend:(id)arg1 ;
-(void)resume:(id)arg1 ;
-(id)initWithParallaxEngineSettings:(id)arg1 ;
-(void)_setUpDisplayLink;
-(void)_sendClearOffset;
-(void)_onDisplayLink:(id)arg1 ;
-(void)_sendOffset:(CGPoint)arg1 lockStatus:(int)arg2 lockStrength:(float)arg3 ;
-(BOOL)_suspended;
-(void)resetReferenceFrame;
-(void)_defaultsChanged:(id)arg1 ;
-(void).cxx_destruct;
@end

