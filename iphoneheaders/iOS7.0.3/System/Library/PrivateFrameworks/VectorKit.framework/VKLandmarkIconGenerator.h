/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKLandmarkIconGenerator : NSObject
+(id)sharedGenerator;
-(id)newIconWithMask:(CGImageRef)arg1 outlineMask:(CGImageRef)arg2 style:(SCD_Struct_VK122*)arg3 scale:(float)arg4 ;
-(BOOL)canHandleStyle:(SCD_Struct_VK122*)arg1 ;
-(id)keyForName:(id)arg1 style:(SCD_Struct_VK122*)arg2 ;
@end
