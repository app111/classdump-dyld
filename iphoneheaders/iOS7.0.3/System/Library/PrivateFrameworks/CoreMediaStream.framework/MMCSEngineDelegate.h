/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MMCSEngineDelegate <NSObject>
@optional
-(void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2;
-(BOOL)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2;
-(void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3;
-(id)MMCSEngine:(id)arg1 didRequestAssetWithItemID:(unsigned long long)arg2;

@required
-(void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
-(void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
-(void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
-(void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
-(void)didFinishGettingAllAssets;
-(void)didFinishPuttingAllAssets;
-(void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
@end
