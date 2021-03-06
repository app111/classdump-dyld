/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCharacterSet.h>

@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {

	NSCharacterSet* _original;
	NSCharacterSet* _invertedSet;
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	}  _flags;

}
-(id)replacementObjectForCoder:(id)arg1 ;
-(BOOL)longCharacterIsMember:(unsigned long)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(id)bitmapRepresentation;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(id)initWithSet:(id)arg1 options:(unsigned)arg2 ;
-(void)_expandInverted;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)autorelease;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(BOOL)isEmpty;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)invertedSet;
@end

