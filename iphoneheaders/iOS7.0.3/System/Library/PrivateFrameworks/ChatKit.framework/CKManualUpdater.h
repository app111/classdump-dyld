/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface CKManualUpdater : NSObject {

	BOOL _needsUpdate;
	id _target;
	SEL _action;

}

@property (assign,nonatomic) BOOL needsUpdate;              //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (assign,nonatomic) id target;                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
-(void)setNeedsUpdate;
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)updateIfNeeded;
-(BOOL)needsUpdate;
@end

