/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.constants;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.meta_data.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import org.apache.thrift.meta_data.FieldValueMetaData;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="Internship", builder=Internship.Builder.class)
public final class Internship implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public Internship(
        @com.facebook.swift.codec.ThriftField(value=1, name="weeks", requiredness=Requiredness.REQUIRED) final int weeks,
        @com.facebook.swift.codec.ThriftField(value=2, name="title", requiredness=Requiredness.NONE) final String title,
        @com.facebook.swift.codec.ThriftField(value=3, name="employer", requiredness=Requiredness.OPTIONAL) final test.fixtures.constants.Company employer,
        @com.facebook.swift.codec.ThriftField(value=4, name="compensation", requiredness=Requiredness.OPTIONAL) final Double compensation,
        @com.facebook.swift.codec.ThriftField(value=5, name="school", requiredness=Requiredness.OPTIONAL) final String school
    ) {
        this.weeks = weeks;
        this.title = title;
        this.employer = employer;
        this.compensation = compensation;
        this.school = school;
    }
    
    @ThriftConstructor
    protected Internship() {
      this.weeks = 0;
      this.title = null;
      this.employer = null;
      this.compensation = null;
      this.school = null;
    }
    
    public static class Builder {
    
        private int weeks = 0;
        private String title = null;
        private test.fixtures.constants.Company employer = null;
        private Double compensation = null;
        private String school = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="weeks", requiredness=Requiredness.REQUIRED)
        public Builder setWeeks(int weeks) {
            this.weeks = weeks;
            return this;
        }
    
        public int getWeeks() { return weeks; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="title", requiredness=Requiredness.NONE)
        public Builder setTitle(String title) {
            this.title = title;
            return this;
        }
    
        public String getTitle() { return title; }
    
            @com.facebook.swift.codec.ThriftField(value=3, name="employer", requiredness=Requiredness.OPTIONAL)
        public Builder setEmployer(test.fixtures.constants.Company employer) {
            this.employer = employer;
            return this;
        }
    
        public test.fixtures.constants.Company getEmployer() { return employer; }
    
            @com.facebook.swift.codec.ThriftField(value=4, name="compensation", requiredness=Requiredness.OPTIONAL)
        public Builder setCompensation(Double compensation) {
            this.compensation = compensation;
            return this;
        }
    
        public Double getCompensation() { return compensation; }
    
            @com.facebook.swift.codec.ThriftField(value=5, name="school", requiredness=Requiredness.OPTIONAL)
        public Builder setSchool(String school) {
            this.school = school;
            return this;
        }
    
        public String getSchool() { return school; }
    
        public Builder() { }
        public Builder(Internship other) {
            this.weeks = other.weeks;
            this.title = other.title;
            this.employer = other.employer;
            this.compensation = other.compensation;
            this.school = other.school;
        }
    
        @ThriftConstructor
        public Internship build() {
            Internship result = new Internship (
                this.weeks,
                this.title,
                this.employer,
                this.compensation,
                this.school
            );
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("Internship");
    private final int weeks;
    public static final int _WEEKS = 1;
    private static final TField WEEKS_FIELD_DESC = new TField("weeks", TType.I32, (short)1);
        private final String title;
    public static final int _TITLE = 2;
    private static final TField TITLE_FIELD_DESC = new TField("title", TType.STRING, (short)2);
        private final test.fixtures.constants.Company employer;
    public static final int _EMPLOYER = 3;
    private static final TField EMPLOYER_FIELD_DESC = new TField("employer", TType.I32, (short)3);
        private final Double compensation;
    public static final int _COMPENSATION = 4;
    private static final TField COMPENSATION_FIELD_DESC = new TField("compensation", TType.DOUBLE, (short)4);
        private final String school;
    public static final int _SCHOOL = 5;
    private static final TField SCHOOL_FIELD_DESC = new TField("school", TType.STRING, (short)5);
    static {
      NAMES_TO_IDS.put("weeks", 1);
      FIELD_METADATA.put(1, WEEKS_FIELD_DESC);
      NAMES_TO_IDS.put("title", 2);
      FIELD_METADATA.put(2, TITLE_FIELD_DESC);
      NAMES_TO_IDS.put("employer", 3);
      FIELD_METADATA.put(3, EMPLOYER_FIELD_DESC);
      NAMES_TO_IDS.put("compensation", 4);
      FIELD_METADATA.put(4, COMPENSATION_FIELD_DESC);
      NAMES_TO_IDS.put("school", 5);
      FIELD_METADATA.put(5, SCHOOL_FIELD_DESC);
    }
    
    
    @com.facebook.swift.codec.ThriftField(value=1, name="weeks", requiredness=Requiredness.REQUIRED)
    public int getWeeks() { return weeks; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=2, name="title", requiredness=Requiredness.NONE)
    public String getTitle() { return title; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=3, name="employer", requiredness=Requiredness.OPTIONAL)
    public test.fixtures.constants.Company getEmployer() { return employer; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=4, name="compensation", requiredness=Requiredness.OPTIONAL)
    public Double getCompensation() { return compensation; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=5, name="school", requiredness=Requiredness.OPTIONAL)
    public String getSchool() { return school; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("weeks", weeks);
        helper.add("title", title);
        helper.add("employer", employer);
        helper.add("compensation", compensation);
        helper.add("school", school);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        Internship other = (Internship)o;
    
        return
            Objects.equals(weeks, other.weeks) &&
            Objects.equals(title, other.title) &&
            Objects.equals(employer, other.employer) &&
            Objects.equals(compensation, other.compensation) &&
            Objects.equals(school, other.school) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            weeks,
            title,
            employer,
            compensation,
            school
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<Internship> asReader() {
      return Internship::read0;
    }
    
    public static Internship read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(Internship.NAMES_TO_IDS, Internship.FIELD_METADATA);
      Internship.Builder builder = new Internship.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _WEEKS:
          if (__field.type == TType.I32) {
            int weeks = oprot.readI32();
            builder.setWeeks(weeks);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _TITLE:
          if (__field.type == TType.STRING) {
            String title = oprot.readString();
            builder.setTitle(title);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _EMPLOYER:
          if (__field.type == TType.I32) {
            test.fixtures.constants.Company employer = test.fixtures.constants.Company.fromInteger(oprot.readI32());
            builder.setEmployer(employer);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _COMPENSATION:
          if (__field.type == TType.DOUBLE) {
            Double compensation = oprot.readDouble();
            builder.setCompensation(compensation);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _SCHOOL:
          if (__field.type == TType.STRING) {
            String school = oprot.readString();
            builder.setSchool(school);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldBegin(WEEKS_FIELD_DESC);
      oprot.writeI32(this.weeks);
      oprot.writeFieldEnd();
      if (this.title != null) {
        oprot.writeFieldBegin(TITLE_FIELD_DESC);
        oprot.writeString(this.title);
        oprot.writeFieldEnd();
      }
      if (this.employer != null) {
        oprot.writeFieldBegin(EMPLOYER_FIELD_DESC);
        oprot.writeI32(this.employer == null ? 0 : this.employer.getValue());
        oprot.writeFieldEnd();
      }
      if (this.compensation != null) {
        oprot.writeFieldBegin(COMPENSATION_FIELD_DESC);
        oprot.writeDouble(this.compensation);
        oprot.writeFieldEnd();
      }
      if (this.school != null) {
        oprot.writeFieldBegin(SCHOOL_FIELD_DESC);
        oprot.writeString(this.school);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _InternshipLazy {
        private static final Internship _DEFAULT = new Internship.Builder().build();
    }
    
    public static Internship defaultInstance() {
        return  _InternshipLazy._DEFAULT;
    }
}
