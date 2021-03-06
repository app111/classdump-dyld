/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UIStatusBarItem : NSObject {

	int _idiom;
	int _type;

}

@property (nonatomic,readonly) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) Class viewClass; 
@property (nonatomic,readonly) int priority; 
@property (nonatomic,readonly) int leftOrder; 
@property (nonatomic,readonly) int rightOrder; 
@property (nonatomic,readonly) NSString * indicatorName; 
+(id)itemWithType:(int)arg1 idiom:(int)arg2 ;
+(BOOL)typeIsValid:(int)arg1 ;
+(BOOL)itemType:(int)arg1 idiom:(int)arg2 canBeEnabledForData:(id)arg3 style:(id)arg4 ;
+(BOOL)itemType:(int)arg1 idiom:(int)arg2 appearsInRegion:(int)arg3 ;
+(BOOL)isItemWithTypeExclusive:(int)arg1 ;
-(id)description;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(BOOL)appearsOnLeft;
-(BOOL)appearsOnRight;
-(BOOL)appearsInRegion:(int)arg1 ;
-(int)comparePriority:(id)arg1 ;
-(int)priority;
-(id)indicatorName;
-(int)leftOrder;
-(int)rightOrder;
-(Class)viewClass;
-(int)compareLeftOrder:(id)arg1 ;
-(int)compareRightOrder:(id)arg1 ;
@end

