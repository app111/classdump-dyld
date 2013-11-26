/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSHashTable, NSMutableArray;

@interface GKEventEmitter : NSObject {

	NSHashTable* _listeners;
	NSMutableArray* _supportedProtocols;
	NSMutableArray* _queuedEvents;

}

@property (nonatomic,retain) NSHashTable * listeners;                          //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedProtocols;              //@synthesize supportedProtocols=_supportedProtocols - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedEvents;                    //@synthesize queuedEvents=_queuedEvents - In the implementation block
+(id)eventEmitterForProtocols:(id)arg1 ;
-(void)registerListener:(id)arg1 ;
-(void)unregisterListener:(id)arg1 ;
-(void)unregisterAllListeners;
-(id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(id)initWithSupportedProtocols:(id)arg1 ;
-(void)setSupportedProtocols:(id)arg1 ;
-(void)setQueuedEvents:(id)arg1 ;
-(void)dispatchQueuedEventsToListener:(id)arg1 ;
-(id)invocationForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(id)supportedProtocols;
-(id)queuedEvents;
-(id)listeners;
-(void)setListeners:(id)arg1 ;
-(BOOL)listenerRegisteredForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end
