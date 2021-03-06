/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSProtocolChecker, Protocol;

@interface IMInvocationQueue : NSObject {

	BOOL _holdQueue;
	id _delegate;
	id _target;
	NSMutableArray* _queue;
	NSMutableArray* _options;
	NSProtocolChecker* _protocolChecker;
	double _dequeueRate;

}

@property (nonatomic,retain) Protocol * protocol; 
@property (assign) id target;                                                    //@synthesize target=_target - In the implementation block
@property (assign) id delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double dequeueRate;                                 //@synthesize dequeueRate=_dequeueRate - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,readonly) BOOL holdQueue;                                   //@synthesize holdQueue=_holdQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSProtocolChecker * protocolChecker;              //@synthesize protocolChecker=_protocolChecker - In the implementation block
-(id)peek;
-(void)setProtocol:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setTarget:(id)arg1 ;
-(BOOL)isEmpty;
-(id)target;
-(void)forwardInvocation:(id)arg1 ;
-(id)options;
-(id)protocol;
-(id)queue;
-(unsigned)_optionsForInvocation:(id)arg1 ;
-(int)_enqueueInvocation:(id)arg1 options:(unsigned)arg2 ;
-(BOOL)_invokeInvocation:(id)arg1 ;
-(void)_setQueueTimer;
-(void)_checkQueue;
-(id)_dequeueInvocation;
-(int)_numberOfLimitedMessagesInQueue;
-(int)_maxQueueLimitSize;
-(BOOL)_acceptsOptions:(unsigned)arg1 ;
-(BOOL)_replaceSimilarInvocation:(id)arg1 ;
-(BOOL)_insertInvocation:(id)arg1 options:(unsigned)arg2 ;
-(void)setDequeueRate:(double)arg1 ;
-(void)_stepQueueNotification:(id)arg1 ;
-(void)_holdQueueNotification:(id)arg1 ;
-(void)_releaseQueueNotification:(id)arg1 ;
-(void)removeAllInvocations;
-(void)invokeAll;
-(double)dequeueRate;
-(id)protocolChecker;
-(BOOL)holdQueue;
@end

