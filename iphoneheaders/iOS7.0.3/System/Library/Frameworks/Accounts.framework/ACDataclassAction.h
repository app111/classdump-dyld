/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@interface ACDataclassAction : NSObject <NSSecureCoding> {

	BOOL _isDestructive;
	int _type;

}

@property (nonatomic,readonly) int type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isDestructive;              //@synthesize isDestructive=_isDestructive - In the implementation block
+(id)destructiveActionWithType:(int)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)actionWithType:(int)arg1 ;
-(id)initWithType:(int)arg1 destructivity:(BOOL)arg2 ;
-(BOOL)isDestructive;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)type;
@end
