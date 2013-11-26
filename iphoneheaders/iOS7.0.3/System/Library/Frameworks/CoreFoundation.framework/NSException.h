/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString, NSDictionary;

@interface NSException : NSObject <NSCopying, NSCoding> {

	NSString* name;
	NSString* reason;
	NSDictionary* userInfo;
	id reserved;

}
+(void)raise:(id)arg1 format:(id)arg2 arguments:(void*)arg3 ;
+(void)raise:(id)arg1 format:(id)arg2 ;
+(id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(id)_crashReporterString;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(id)callStackReturnAddresses;
-(BOOL)_installStackTraceKeyIfNeeded;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)raise;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)userInfo;
-(id)name;
-(id)callStackSymbols;
-(id)reason;
@end
