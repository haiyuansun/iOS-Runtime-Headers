/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL;

@interface SAClockAddCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property bool alreadyExists;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * refId;
@property(readonly) Class superclass;
@property(copy) NSURL * worldClockId;

+ (id)addCompleted;
+ (id)addCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (bool)alreadyExists;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAlreadyExists:(bool)arg1;
- (void)setWorldClockId:(id)arg1;
- (id)worldClockId;

@end